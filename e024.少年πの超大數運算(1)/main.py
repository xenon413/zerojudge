while True:
    a,b=input().split()
    if a=="0" and b=="0":
        break
    ans=a+"**"+b
    print(eval(ans))