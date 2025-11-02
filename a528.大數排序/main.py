try:
    while True:
        n=eval(input())
        num=[]
        for i in range(n):
            m=eval(input())
            num.append(m)
        num.sort()
        for i in num:
            print(i)
except EOFError:
    pass