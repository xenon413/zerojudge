n=eval(input())
num=list(map(int,input().split()))
ans=0
for i in range(n):
    if num[i]==0:
        if i==0:
            ans+=num[i+1]
        elif i==n-1:
            ans+=num[i-1]
        else:
            ans+=min(num[i-1],num[i+1])
print(ans)