ori $1,$1,0x1c01
mtc0 $1,$12

lui $2,0x7fff
lui $3,0x7fff
beq $0,$3,end
add $2,$3,$3#延迟槽指令出错。可在此处加入外部中断，断2次

ori $4,$4,4
lw $4,-4($4)#阻塞的时候来点外部中断
bne $0,$4,end#此处需要更改机器码让beq出错
ori $4,$2,1

#时钟中断
ori $5,$0,9
ori $8,$0,1
ori $6,$0,0x7f00
sw $8,4($6)
sw $5,0($6)
add $7,$7,$5#啥时候中断我也搞不清……
add $7,$7,$5
add $7,$7,$5
add $7,$7,$5

and $1,$1,$0
ori $1,$1,0x1001
mtc0 $1,$12#不许时钟中断了
sw $8,4($6)
sw $5,0($6)
add $7,$7,$5#啥时候中断我也搞不清……
add $7,$7,$5
add $7,$7,$5
add $7,$7,$5

end:
beq $0,$0,end#死循环
nop


#异常处理程序
.ktext 0x4180
mfc0 $k0,$12
mfc0 $k0,$13
ori $k1, $0, 0x7c
and $k0, $k0, $k1
bne $k0,$0,WTF
	sb $0, 0x7f20($0)
	sw $0, 0x7f00($0)
WTF:
mfc0 $k0,$14
addi $k0,$k0,4
mtc0 $k0,$14
eret