from math import *
try:
    while True:
        n=eval(input())%81
        if n==0:
            print("konopad!")
        else:
            print("konosuba!")
except EOFError:
    pass