try:
    while True:
        def fact(n):
            if n == 0 or n == 1:
                return 1
            else:
                return n * fact(n - 1)
        a,b=map(int,input().split())
        print(fact(a)//(fact(b)*fact(a-b)))
except EOFError:
    pass