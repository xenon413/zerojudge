n = int(input())
for i in range(n):
    input()
    a = list(map(int, input().replace("/", " ").split()))
    b = list(map(int, input().replace("/", " ").split()))
    print("Case #",i+1,": ",sep="",end="")
    y=a[2]-b[2]
    m=a[1]-b[1]
    d=a[0]-b[0]
    if m<0:
        y-=1
    elif m==0:
        if d<0:
            y-=1
    if y>130:
        print("Check birth date")
    elif y<0:
        print("Invalid birth date")
    else:
        print(y)