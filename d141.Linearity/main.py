n=int(input())
for i in range(n):
    num=[int(x) for x in input().replace(',',' ').split()]
    m1=(num[5]-num[1])*(num[0]-num[2])
    m2=(num[1]-num[3])*(num[4]-num[0])
    if m1==m2:
        print("collinear")
    else:
        print("not collinear")