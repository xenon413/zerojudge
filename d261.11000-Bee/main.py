while True:
    num=int(input())
    if num==-1:
        break
    m=0
    f=1
    for i in range(num):
        F=m+1
        M=m+f
        f=F
        m=M
    print(m,f+m)