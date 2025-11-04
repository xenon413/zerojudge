try:
    while True:
        a=input()
        b=input()
        c=input()
        if b=="/":
            b="//"
        print(round(eval(a+b+c)))
except EOFError:
    pass