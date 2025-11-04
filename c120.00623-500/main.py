try:
    while True:
        n=int(input())
        print(n,'!',sep="")
        add=1
        for i in range(1,n+1):
            add*=i
        print(add)
except EOFError:
    pass