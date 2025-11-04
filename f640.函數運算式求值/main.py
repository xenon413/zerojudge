def f(x):
    return  str(2*eval(x)-3)
def g(x,y):
    return  str(2*eval(x)+eval(y)-7)
def h(x,y,z):
    return str(3*eval(x)-2*eval(y)+eval(z))

n=list(map(str,input().split()))
cnt=0
for i in range(len(n)):
    
    if not n[-1-i+cnt].isdigit():
        if n[-1-i+cnt]=="f":
            n[-1-i+cnt]=f(n[-1-i+1+cnt])
            n.pop(-1-i+1+cnt)
            cnt+=1
        if n[-1-i+cnt]=="g":
            n[-1-i+cnt]=g(n[-1-i+1+cnt],n[-1-i+2+cnt])
            n.pop(-1-i+1+cnt)
            n.pop(-1-i+2+cnt)
            cnt+=2
        if n[-1-i+cnt]=="h":
            n[-1-i+cnt]=h(n[-1-i+1+cnt],n[-1-i+2+cnt],n[-1-i+3+cnt])
            n.pop(-1-i+1+cnt)
            n.pop(-1-i+2+cnt)
            n.pop(-1-i+3+cnt)
            cnt+=3
print(n[0])