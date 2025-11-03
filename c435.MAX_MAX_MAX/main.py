n=input()
num=list(map(int,input().split()))
a,b=1,0
for i in num:
    a=max(i,a)
    b=max(b,a-i)
print(b)