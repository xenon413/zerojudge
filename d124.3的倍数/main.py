try:
    while True:
        if int(input())%3==0:
            print("yes")
        else:
            print("no")
except EOFError:
    pass