try:
    while True:
        a,b=input().split()
        i=0
        k=0
        while k<len(b) and i<len(a):
            if b[k]!=a[i]:
                k+=1
            else:
                k+=1
                i+=1
        else:
            if i>=len(a):
                print("Yes")
            else:
                print("No")

except EOFError:
    pass