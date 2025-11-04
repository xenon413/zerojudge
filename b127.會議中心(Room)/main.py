try:
    while True:
        num = int(input())
        a,b=1,1
        if num>=2:
            for i in range(num-1):
                iSum=a+b
                a=b
                b=iSum
            print(iSum)
        else:
            print(1)
except EOFError:
    pass