a, b = map(int, input().split())
if a > b:
    print(100-a+b)
else:
    print(b-a)