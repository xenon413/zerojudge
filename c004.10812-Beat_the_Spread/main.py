row=eval(input())
for i in range(row):
    a,b=map(int,input().split())
    if b>a:
        print("impossible")
    elif (a+b)%2!=0 or a<b:
        print("impossible")
    else:
        num1=(a+b)/2
        num2=a-num1
        print(int(max(num1,num2)),int(min(num1,num2)))