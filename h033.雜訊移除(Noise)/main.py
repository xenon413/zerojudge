a,b=input().split()
a=list(a)
try:
    while True:
        a.remove(b)
except ValueError:
    pass
if a==a[-1::-1]:
    print("Yes")
else:
    print("No")