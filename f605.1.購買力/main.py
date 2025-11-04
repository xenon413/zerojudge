n,d=map(int,input().split())
price=0
cnt=0
for i in range(n):
    item=list(map(int,input().split()))
    if d<=max(item)-min(item):
        cnt+=1
        price+=sum(item)//3
print(cnt,price)