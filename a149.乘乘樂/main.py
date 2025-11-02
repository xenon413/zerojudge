a = int(input())
for i in range(a):
    b = list(map(int, list(input())))
    ans = 1
    for k in b:
        ans *= k
    print(ans)