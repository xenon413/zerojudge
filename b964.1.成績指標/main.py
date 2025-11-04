n=input()
num=list(map(int,input().split()))
num.sort()
for i in num:
    print(i,end=" ")
print()
if num[0]>=60:
    print("best case")
    print(num[0])
else:
    if num[len(num)-1]<60:
        print(num[len(num)-1])
        print("worst case")
    else:
        for i in range(len(num)):
            if num[i]>=60:
                print(num[i-1])
                print(num[i])
                break