a,b,c=map(int,input().split())
d=((b * b) - (a * c * 4))
e = (d**(1/2) - b) / (a * 2)
f = (-(d**(1/2)) - b) / (a * 2)
if d<0:
    print("No real root ")
elif e == f:
    print("Two same roots x="+str(round(e)))
else:
    print("Two different roots "+"x1="+str(round(e))+" , x2="+str(round(f)))