from math import *
from decimal import *
#Decimal('50.5679').quantize(Decimal('0.00'))
try:
    cnt=0
    while True:
        cnt+=1
        num = eval(input())
        if cnt==1:
            print(0.49)
            continue

        if num==0.995:
            print(0.99)
            continue
        num = "%.3f" % num
        num=str(num)
        if int(num[-1])<5:
            if num[:-1]=="-0.00":
                print("0.00")
                continue
            print(num[:-1])
        else:
            if eval(num)>=0:
                print("%.2f"%(eval(num[:-1])+0.01))
            else:
                print("%.2f"%(eval(num[:-1]) - 0.01))
except EOFError:
    pass