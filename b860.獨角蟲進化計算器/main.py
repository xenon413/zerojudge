c, w = map(int, input().split())
total = 0
while w > 0 and c//12 > 0:
    num = c//12
    if num > w:
        num = w
    c -= num*11
    w -= num
    total += num

while w >0:
    r = 12-c
    if r > w:
        break
    w-=r
    total += 1
    c = 0

print(total)