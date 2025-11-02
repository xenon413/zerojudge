try:
    while True:
        x = int(input())
        ans = 0
        for i in range(2, int(x**0.5)):
            while x%i==0:
                ans += i
                x//=2

        if ans == 0:
            ans = x
        print(ans)

except EOFError:
    pass