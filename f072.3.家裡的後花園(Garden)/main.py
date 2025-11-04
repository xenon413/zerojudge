#13
#0 1 0 9 1 0 1 0 9 0 0 1 0
n=eval(input())
num=list(map(int,input().split()))
i=0
while i<len(num):
    if num[i]!=1:
        num.pop(i)
        i-=1
    else:
        break
    i+=1
i=0
while i<len(num):
    if num[-1-i]!=1:
        num.pop(-1-i)
        i-=1
    else:
        break
    i+=1

for i in range(len(num)):
    if num[i]==9:
        if num[i-1]==0:
            num[i-1]=-1
        if num[i+1]==0:
            num[i+1]=-1
ans=num.count(0)
if ans<0:
    ans=0
print(ans)