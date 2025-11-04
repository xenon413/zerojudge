try:
    while True:
        n=int(input())
        s=0
        d=1
        an=1
        for i in range(50):
            s+=an
            an+=d
            d+=n
        print(s)
except EOFError:
    pass