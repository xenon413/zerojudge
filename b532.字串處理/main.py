from math import *
row=int(input())

for i in range(row):
    check=False
    my_string=input()
    front=""
    back=""
    opper=""
    for letter in my_string:
        if letter=="+" or letter=="-" or letter=="*" or letter=="/" or letter=="%":
            opper+=letter
            check=True
        if letter.isdigit():
            if check:
                back+=letter
            else:
                front+=letter
    if front[0]=="0":
        front=front[1:]
    if back[0]=="0":
        back=back[1:]
    ans=front+opper+back
    print(floor(eval(ans)))