input()
num=list(map(int,input().split()))
a=[]
a.append(num[0])
for i in range(len(num)-1):
    a.append(num[i+1]-num[i])
print(*a)