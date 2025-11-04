num=int(input())
cnt=0
round=1
check=0
while cnt<num:
    for i in range(round):
        cnt+=1
    if cnt>=num:
        check=1
        break

    for i in range(round):
        cnt+=1
    if cnt>=num:
        check=2
        break

    for i in range(round):
        cnt+=1
    if cnt>=num:
        check=3
        break

    for i in range(round):
        cnt+=1
    if cnt>=num:
        check=4
        break

    round+=1


if check==1:
    print("Pen")
elif check==2:
    print("Pineapple")
elif check==3:
    print("Apple")
else:
    print("Pineapple pen")