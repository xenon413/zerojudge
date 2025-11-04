a,b,c=map(int,input().split())

if c%a==0 or c%b==0:
    print("YES")
elif a>c or b>c:
    print("NO")
else:
    while a<c:
        c-=a
        if c%b==0:
            print("YES")
            break
    if a>c:
        print("NO")