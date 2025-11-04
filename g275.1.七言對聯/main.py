n=int(input())
for i in range (n):
    list1 = list(map(int, input().split()))
    list2 = list(map(int, input().split()))
    check=True
    if not ((list1[1]!=list1[3] and list1[1]==list1[5]) and (list2[1]!=list2[3] and list2[1]==list2[5])):
        check=False
        print("A",end="")
    if not (list1[-1]==1 and list2[-1]==0):
        check=False
        print("B",end="")
    if not (list1[1]!=list2[1] and list1[3]!=list2[3] and list1[5]!=list2[5]):
        check=False
        print("C",end="")
    if check==True:
        print("None",end="")
    print()