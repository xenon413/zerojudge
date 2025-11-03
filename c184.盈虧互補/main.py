def solution(num):
    sum=0
    for i in range(1,int(num**0.5)+1):
        if num%i==0:
            sum+=i+int(num/i)
    
    return sum-num


while True:
    a=int(input())
    if a==0:
        break
    b=solution(a)
    if a==solution(b):
        if a==b:
            print("=",a,sep="")
        else:
            print(b)
    else:
        print(0)