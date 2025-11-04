a = int(input())
b = list(map(int, input().split()))
for i in range(a, 0, -1):
    if i == b[0] or i == b[1] or i == b[2]:
        continue
    print("No.", i)