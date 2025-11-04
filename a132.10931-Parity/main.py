while True:
    num=eval(input())
    if num==0:
        break
    num=bin(num)
    cnt=num.count("1")
    print("The parity of "+str(num[2:])+" is "+str(cnt)+" (mod 2).")