try:
    while True:
        n = int(input())
        ans = 0
        for i in range(n):
            ans+=4**i
        print(ans)
except EOFError:
    pass