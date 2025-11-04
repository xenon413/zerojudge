try:
    while True:
        a,b=map(bin,map(int,input().split()))
        a=a[2:]
        b=b[2:]
        if len(b)>len(a):
            a,b=b,a
        string=''
        for i in range(1,len(a)+1):
            try:
                if a[-i]=='1' and b[-i]=='1':
                    string+='0'
                elif a[-i]=='1' or b[-i]=='1':
                    string+='1'
                else:
                    string+='0'
            except IndexError:
                string+=a[-i]

        print(int(string[::-1],2))
except EOFError:
    pass