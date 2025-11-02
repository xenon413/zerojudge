try:
    while True:
        input()
        b = list(map(int, input().split()))
        b.sort()
        print(*b)

except EOFError:
    pass