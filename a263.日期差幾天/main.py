import datetime 
try:
    while True:
        a=list(map(int,input().split()))
        b=list(map(int,input().split()))
        d1=datetime.datetime(a[0],a[1],a[2])
        d2=datetime.datetime(b[0],b[1],b[2])
        ans=(d2-d1).days
        print(abs(ans))
except EOFError:
    pass