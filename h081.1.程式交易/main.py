n,d=map(int,input().split())
price=list(map(int,input().split()))
x=price[0]
earn=0
last=0
check=True
for i in price[1:]:
    if check:
        if i>=x+d:
            earn+=i-x
            last=i
            check=False
    else:
        if i<=last-d:
            x=i
            check=True
print(earn)