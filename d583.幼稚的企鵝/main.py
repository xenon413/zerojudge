try:

    while True:
        n=eval(input())
        num=list(map(int,input().split()))
        num.sort()
        for i in num:
            print(i,end=" ")
        print()
except EOFError:
    pass