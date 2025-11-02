while True:
    n = int(input())

    # break point
    if n == 0:
        break

    d = {}
    for _ in range(n):
        l = input().split()
        l.sort()
        c = "".join(l)
        if d.get(c):
            d[c]+=1
        else:
            d[c]=1
        
    imax = max(d.values())
    print(list(d.values()).count(imax)*imax)
