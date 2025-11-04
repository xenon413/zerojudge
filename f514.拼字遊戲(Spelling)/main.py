a=list(input())
b=list(input())
for i in b:
    try:
        print(a.index(i)+1,end=" ")
        a[a.index(i)]= i.upper()
    except ValueError:
        print("X",end=" ")