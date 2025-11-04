t=int(input())
for i in range(t):
    a = []
    n=int(input())
    for k in range(n):
        num=int(input())
        a.append(num)
    a.sort(reverse=True)
    print(a[len(a)//2])