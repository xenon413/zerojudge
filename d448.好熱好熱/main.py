try:
    while True:
        t1,t2,t3,x1,x3=map(float,input().split())
        x2 = (t1 - t3) / (t2 - t3)
        x2 = (x1 - x3) / x2 + x3
        print('%.6f'%x2)
except EOFError:
    pass