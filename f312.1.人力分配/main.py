a=list(map(int,input().split()))
b=list(map(int,input().split()))
n=int(input())
imax=-1000
for x in range(0,n+1):
    y=x*x*a[0]+a[1]*x+a[2]+b[0]*(n-x)*(n-x)+b[1]*(n-x)+b[2]
    if y>imax:
        imax=y
print(imax)