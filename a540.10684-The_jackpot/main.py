while True:
    n=input()
    if n=='0':
        break
    ilist = list(map(int, input().split()))
    imax=0
    add=0
    for i in ilist:
        add+=i
        if add>imax:
            imax=add
        if add<=0:
            add=0
    if imax>0:
        print("The maximum winning streak is ",imax,".",sep="")
    else:
        print("Losing streak.")