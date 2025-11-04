num = [x for x in input().split()]
i=0
while i <len(num):
    if num[i]=='+' or num[i]=='-'or num[i]=='*'or num[i]=='/':
        string=''
        string+=num[i-2]+num[i]+num[i-1]
        string=str(eval(string))
        num[i]=string
        num.pop(i-2)
        num.pop(i-2)
        i=0
    i+=1
print(int(eval(num[0])))