n=int(input())
for i in range(n):
    num=input()
    re=num[-1::-1]
    num=str(int(num)+int(re))
    cnt=0
    while True:
        cnt += 1
        re=num[-1::-1]
        if re==num:
            break
        
        num = str(int(num) + int(re))
    print(cnt,num)