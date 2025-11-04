a=list(map(int,input().split()))
a=a[1:]
a.sort()
flage=True
for i in range(len(a)-1):
    if not a[i]==a[i+1]-1:
        flage=False
        break
if flage==True:
    print(a[0],a[-1],"yes")
else:
    print(a[0],a[-1],"no")