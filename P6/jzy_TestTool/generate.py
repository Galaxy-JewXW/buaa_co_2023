import random

max_register=23
min_register=8


class Generate:
    def __init__(self,file_path):
        self.file_path=file_path
        self.instr_cal_R=["add", "sub", "and", "or", "slt", "sltu"]
        self.instr_cal_I=["lui","addi", "andi", "ori"]
        self.instr_load=["lb", "lh", "lw"]
        self.instr_store=["sb", "sh", "sw"]
        self.instr_mult_div=["mult", "multu", "div", "divu"]
        self.instr_mf=[ "mfhi", "mflo"]
        self.instr_mt=["mthi", "mtlo"]
        self.instr_branch=["beq"]
        self.instr_use=[
            "add", "sub", "and", "or", "slt", "sltu", "lui",
            "addi", "andi", "ori", "lb", "lh", "lw", "sb", "sh", "sw",
            "mfhi", "mflo",
            "beq", "jal"
        ]
        self.instr_pass=[
            "add", "sub", "and", "or", "slt", "sltu", "lui",
            "addi", "andi", "ori", "lb", "lh", "lw", "sb", "sh", "sw",
            "mfhi", "mflo"
        ]
        pass
#register: min_register-max_register
    def get_not_required_register(self,register_required):
        register_pass=random.randint(min_register,max_register)
        while(register_pass == register_required):
            register_pass=random.randint(min_register,max_register)
        return register_pass

    def first_generate(self,instr_str,register_required):
        if instr_str in self.instr_cal_R:
            register_pass1=self.get_not_required_register(register_required)
            register_pass2=self.get_not_required_register(register_required)
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: {instr_str} ${register_required} ${register_pass1} ${register_pass2}\n')

        if instr_str in self.instr_cal_I:
            register_pass1=self.get_not_required_register(register_required)
            integer_pass=random.randint(0,65535)
            if instr_str!='lui':
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr_str} ${register_required} ${register_pass1} {integer_pass}\n')
            else:
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr_str} ${register_required} {integer_pass}\n')

        if instr_str in self.instr_mult_div:
            register_pass1=self.get_not_required_register(register_required)
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: ori ${register_pass1} ${register_pass1} 1\n')#防止除0
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: {instr_str} ${register_required} ${register_pass1}\n')

        if instr_str in self.instr_load:
            offset=0
            if instr_str=='lb':
                offset=random.randint(0,15)
            elif instr_str=='lh':
                offset=random.randint(0,7)*2
            elif instr_str=='lw':
                offset=random.randint(0,3)*4
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: {instr_str} ${register_required} {offset}($0)\n')

        if instr_str in self.instr_mf:
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: {instr_str} ${register_required}\n')



        if instr_str =='jr':
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: ori $t0 $0 0\n')
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: beq $ra $t0 lable{self.cnt+5}\n')
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: nop\n')
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: addi $ra $ra 12\n')
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: jr $ra\n')
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: nop\n')
            return self.cnt-5
        pass

    #该函数用于生成gap指令
    def pass_generate(self,register_required,n):
        for i in range(n):
            instr_pass=random.choice( self.instr_pass)
            if instr_pass in self.instr_cal_R:
                register_pass1 = self.get_not_required_register(register_required)
                register_pass2 = self.get_not_required_register(register_required)
                register_pass3 = self.get_not_required_register(register_required)
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr_pass} ${register_pass3} ${register_pass1} ${register_pass2}\n')
    
            if instr_pass in self.instr_cal_I:
                register_pass1 = self.get_not_required_register(register_required)
                register_pass2 = self.get_not_required_register(register_required)
                integer_pass=random.randint(0,65535)
                if instr_pass!='lui':
                    self.cnt=self.cnt+1
                    self.file.write(f'lable{self.cnt}: {instr_pass} ${register_pass2} ${register_pass1} {integer_pass}\n')
                else:
                    self.cnt=self.cnt+1
                    self.file.write(f'lable{self.cnt}: {instr_pass} ${register_pass2} {integer_pass}\n')

            if instr_pass in self.instr_load:
                register_pass1 = self.get_not_required_register(register_required)
                offset=0
                if instr_pass=='lb':
                    offset=random.randint(0,15)
                elif instr_pass=='lh':
                    offset=random.randint(0,7)*2
                elif instr_pass=='lw':
                    offset=random.randint(0,3)*4
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr_pass} ${register_pass1} {offset}($0)\n')

            if instr_pass in self.instr_store:
                register_pass1 = self.get_not_required_register(register_required)
                offset=0
                if instr_pass=='sb':
                    offset=random.randint(0,15)
                elif instr_pass=='sh':
                    offset=random.randint(0,7)*2
                elif instr_pass=='sw':
                    offset=random.randint(0,3)*4
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr_pass} ${register_pass1} {offset}($0)\n')

            if instr_pass in self.instr_mf:
                register_pass1 = self.get_not_required_register(register_required)
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr_pass} ${register_pass1}\n')

        pass

    def final_generate(self,instr,register_required):
        if instr in self.instr_cal_R:
            register_pass1 = self.get_not_required_register(register_required)
            register_pass2 = self.get_not_required_register(register_required)
            self.cnt=self.cnt+1
            if random.randint(0,1)==0:
                self.file.write(f'lable{self.cnt}: {instr} ${register_pass1} ${register_required} ${register_pass2}\n')
            else:
                self.file.write(f'lable{self.cnt}: {instr} ${register_pass1} ${register_pass2} ${register_required}\n')


        if instr in self.instr_cal_I:
            register_pass1 = self.get_not_required_register(register_required)
            integer_pass=random.randint(0,65535)
            if instr!='lui':
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr} ${register_pass1} ${register_required} {integer_pass}\n')

            else:
                self.cnt=self.cnt+1
                self.file.write(f'lable{self.cnt}: {instr} ${register_required} {integer_pass}\n')

        if instr in self.instr_load:
            offset=0
            if instr=='lb':
                offset=random.randint(0,15)
            elif instr=='lh':
                offset=random.randint(0,7)*2
            elif instr=='lw':
                offset=random.randint(0,3)*4
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: {instr} ${register_required} {offset}($0)\n')

        if instr in self.instr_store:
            offset=0
            if instr=='sb':
                offset=random.randint(0,15)
            elif instr=='sh':
                offset=random.randint(0,7)*2
            elif instr=='sw':
                offset=random.randint(0,3)*4
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: {instr} ${register_required} {offset}($0)\n')

        if instr in self.instr_mf:
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: {instr} ${register_required}\n')

        if instr in self.instr_branch:
            register_pass1 = self.get_not_required_register(register_required)
            lable_random=random.randint(0,self.maxn)
            while(lable_random == self.cnt+2 or lable_random == self.cnt+3):
                lable_random=random.randint(0,self.maxn)
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: addi ${register_required} ${register_required} 123312\n')#防止死循环
            self.cnt=self.cnt+1
            if random.randint(0,1)==0:
                self.file.write(f'lable{self.cnt}: {instr} ${register_required} ${register_pass1} lable{lable_random}\n')
            else:
                self.file.write(f'lable{self.cnt}: {instr} ${register_pass1} ${register_required} lable{lable_random}\n')
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: nop\n')#防止延迟槽跳转/分支

        if instr =='jal':
            register_pass1 = self.get_not_required_register(register_required)
            lable_random=0
            if self.formor_jal_cnt<self.maxn:
                lable_random=random.randint(self.formor_jal_cnt,self.maxn)
                while lable_random>self.cnt_temp and lable_random <=self.cnt:
                    lable_random=random.randint(0,self.maxn)
            else:
                lable_random=self.formor_jal_cnt
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: jal lable{lable_random}\n')
            self.cnt=self.cnt+1
            self.file.write(f'lable{self.cnt}: nop\n')
            self.formor_jal_cnt=self.cnt+1
            pass

        pass

    def generate(self,n):
        self.file=open(self.file_path,'w')
        self.cnt=0
        random_n=[]
        self.maxn=0
        self.formor_jal_cnt=0
        for i in range(n):
            random_n.append(random.randint(0,2))
            self.maxn=self.maxn+2+random_n[i]
        for i in range(n):
            instr_final=random.choice( self.instr_use)
            if instr_final in self.instr_cal_R +self.instr_cal_I+self.instr_branch+self.instr_load+self.instr_store:
                random_final_register=random.randint(min_register,max_register)
                instr_first=random.choice(self.instr_cal_I+self.instr_cal_R+self.instr_load+self.instr_mf)
                self.first_generate(instr_first,random_final_register)
                
                self.pass_generate(random_final_register,random_n[i])

                self.final_generate(instr_final,random_final_register)

            if instr_final in self.instr_mf:
                random_final_register=random.randint(min_register,max_register)
                instr_first=random.choice(self.instr_mult_div)
                self.first_generate(instr_first,random_final_register)

                self.pass_generate(random_final_register,random_n[i])

                self.final_generate(instr_final,random_final_register)

            if instr_final =='jal':
                self.cnt_temp= self.first_generate('jr',31)
                self.pass_generate(31,random_n[i])
                self.final_generate('jal',31)
                print('jr')

_generate=Generate('code.txt')
_generate.generate(int(input()))