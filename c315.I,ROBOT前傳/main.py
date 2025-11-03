row=eval(input())
x=0
y=0
for i in range(row):
    num=list(map(int,input().split()))
    if num[0]==0:
        y+=num[1]
    elif num[0]==1:
        x+=num[1]
    elif num[0]==2:
        y-=num[1]
    else:
        x-=num[1]
print(x,y)