n = int(input())
for _ in range(n):
    x, a, b = map(int, input().split())

    start = x//a
    for i in range(start, -1, -1):
        if (x - i*a)%b == 0:
            print(i+(x - i*a)//b)
            break

    else:
        print(-1)
