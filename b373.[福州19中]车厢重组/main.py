num = []
while 1:

   try:

      num.extend(list(map(int, input().split())))

   except:

      break

n = num.pop(0)
#num=list(map(int,input().split()))
cnt=0
for i in range(n-1):
    for k in range(n-i-1):
        if num[k] > num[k+1]:
            cnt+=1
            num[k],num[k+1]=num[k+1],num[k]
print(cnt)