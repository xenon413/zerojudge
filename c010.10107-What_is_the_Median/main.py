try:
    num=[]
    while True:
        m=eval(input())
        num.append(m)
        num.sort()
        if len(num)%2==0:
            print((num[int(len(num)/2)]+num[int(len(num)/2-1)])//2)
        else:
            print(num[int((len(num)-1)/2)])
except EOFError:
    pass