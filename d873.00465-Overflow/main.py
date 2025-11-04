try:
    while True:
        a,b,c=input().split()
        print(a,b,c)
        if eval(a)>2147483647 or eval(a)<-2147483647:
            print("first number too big")
        if eval(c)>2147483647 or eval(c)<-2147483647:
            print("second number too big")
        if eval(a+b+c)>2147483647 or eval(a+b+c)<-2147483647:
            print("result too big")

except EOFError:
    pass