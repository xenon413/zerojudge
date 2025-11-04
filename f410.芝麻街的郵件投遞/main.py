row=int(input())
num=list(map(int,input().split()))
odd=[]
even=[]
for i in num:
    if i%2!=0:
        odd.append(i)
    else:
        even.append(i)
odd.sort()
even.sort()
odd.reverse()
even.extend(odd)
for i in even:
    print(i,end=" ")