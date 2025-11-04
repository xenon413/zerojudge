try:
    while True:
        num=int(input())
        if num<=3:
            print(1)
        else:
            if num%3==0:
                print(num//3)
            elif (num-2)%3==0:
                print((num-2)//3+1)
            else:
                print((num-4)//3+2)
except EOFError:
    pass