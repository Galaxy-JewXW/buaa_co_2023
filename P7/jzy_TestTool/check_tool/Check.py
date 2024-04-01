class Check:
    def __init__(self,file1,file2):# file1: ans file2: yours
        self.file1=file1
        self.file2=file2

    def CheckNop(self,str):#检测不是空指令的输出
        if '$' in str:
            s1=str.split('$')
            s2=s1[1].split('<=')
            s3= s2[0].strip()
            s4= s2[1].strip()
            if (s3=='0') :
                return True
            return False
        return False

    def Check(self):
        checkFile1= open(self.file1,mode='r')
        checkFile2= open(self.file2,mode='r')

        text1=checkFile1.readlines()
        text2=checkFile2.readlines()

        for i in range(len(text2)-1):
            text_temp1=text2[i].split('@')
            text_temp2=text2[i+1].split('@')
            if(text_temp1[0]==text_temp2[0]):
                text_temp3=text_temp1[1].split(':')
                text_temp4=text_temp2[1].split(':')
                if(text_temp3>text_temp4):
                    text=text2[i]
                    text2[i]=text2[i+1]
                    text2[i+1]=text


        j=0
        for i in range(len(text1)):
            if (i >= len(text1) and j < len(text2)) or (i < len(text1) and j >= len(text2)):
                return f"Wrong! The longth aren't same!"
            while(self.CheckNop(text1[i])):
                i=i+1
                if (i>=len(text1) and j<len(text2)) or (i<len(text1) and j>=len(text2)):
                    return f"Wrong! The longth aren't same!"

            while(self.CheckNop(text2[j])):
                j=j+1
                if (i>=len(text1) and j<len(text2)) or (i<len(text1) and j>=len(text2)):
                    return f"Wrong! The longth aren't same!"

            if (i >= len(text1) and j < len(text2)) or (i < len(text1) and j >= len(text2)):
                return f"Wrong! The longth aren't same!"

            checkStr1=text1[i].split('@')
            checkStr2=text2[j].split('@')

            if checkStr1[1].strip()!=checkStr2[1].strip():
                return f"Wrong! We want {text1[i].strip()} but we got {text2[j].strip()}"

            j=j+1

        return "Accepted"

if __name__ == "__main__":
    _check=Check('answer.txt','yours.txt')
    print(_check.Check())