`timescale 1ns / 1ps

`define BD        Cause[31]     //是否是延迟槽指令    
`define IP        Cause[15:10]  //发生了哪个中断
`define EXCcode   Cause[6:2]    //异常原因编码

`define IM        SR[15:10]     //是否允许发生6个中断
`define EXL       SR[1]         //是否处于异常中，1表示进入异常，不再允许中断
`define IE        SR[0]         //全局中断使能

module CP0(
  input clk,
  input reset,

  input WE,
  input [4:0] regAddr,
  input [31:0] dataIn,

  input [31:0] PCnow,

  input [5:0] INTcodeIn,  //外部中断信号
  input [4:0] EXCcodeIn,  //内部异常信号
  input if_delaybanch,

  input if_eret,     //eret退出中断，将SR的EXL置0
  
  output [31:0] EPCout,
  output [31:0] dataOut,
  output Req         //中断请求，由CP0模块确定响应中断请求
    );

reg [31:0] SR;      //配置异常的功能
reg [31:0] Cause;   //记录异常发生的原因和情况
reg [31:0] EPC;     //记录异常处理结束后需要返回的PC
reg [31:0] PRId;    //记录CPU相关信息

assign EPCout = EPC;
assign dataOut = (regAddr==5'd12) ? SR :
                  (regAddr==5'd13) ? Cause :
                  (regAddr==5'd14) ? EPC :
                  (regAddr==5'd15) ? PRId :
                  32'b0;

//不在中断中 存在异常
wire EXCrequest = (~`EXL) & (|EXCcodeIn);
//不在中断异常中 允许当前中断 允许中断发生
wire INTrequest = (~`EXL) & `IE & (|(INTcodeIn & `IM));
//wire INTrequest =0;
assign Req = EXCrequest | INTrequest;

always @(posedge clk or posedge reset) begin
  if(reset==1) begin
    SR<=0;
    Cause<=0;
    EPC<=0;
    PRId<=0;
  end

  else begin
    if (if_eret) `EXL <= 1'b0;   //eret则退出中断异常
    else `EXL <= `EXL;

    `IP<=INTcodeIn;

    //Req
    if(Req) begin
      `EXCcode <= INTrequest ? 5'd0 : EXCcodeIn;   //中断为特殊的异常，异常码为0
      `EXL <= 1;   //进入异常
      EPC <= Req ? (if_delaybanch ? (PCnow - 32'd4) : PCnow) : EPC;
      `BD <= if_delaybanch;
    end

    //write
    else if(WE==1) begin  
      if(regAddr==5'd12)  SR<=dataIn;
      //else if(regAddr==5'd13) Cause<=dataIn;
      else if(regAddr==5'd14) EPC<=dataIn;
      else  PRId<=32'h0000_0000;
      //$display("%d@CP0: $%d <= %h", $time, regAddr, dataIn);
    end

    else  PRId<=32'h0000_0000;
  end
end

endmodule