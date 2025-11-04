from math import *
row=int(input())
for i in range(row):
    a,b=map(int,input().split())
    a-=2
    b-=2
    a/=3
    b/=3
    a=ceil(a)
    b=ceil(b)
    print(a*b)