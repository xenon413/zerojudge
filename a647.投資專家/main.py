n = int(input())

for _ in range(n):
    m, p = map(int, input().split())
    x = (p/m-1)*100
    msg = "keep"
    if x<0:
        x = x - 0.000001    
    elif x>0:
        x = x + 0.000001
        
    if x <= -7:
        msg = "dispose"
    elif x >= 10:
        msg = "dispose"

    print("{:.2f}%".format(x), msg)