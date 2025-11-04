a,b=map(int,input().split())
m=a*60+b

if 17*60>m>=7*60+30:
    print("At School")
else:
    print("Off School")