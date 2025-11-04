a,b=map(int,input().split())
for i in range(a):
    my_list1=list(map(int,input().split()))
    my_list2=list(map(int,input().split()))
    cnt=0
    num1=0
    num2=0
    while num1<len(my_list1) and num2<len(my_list2):
        if my_list1[num1]==my_list2[num2]:
            num1+=1
            num2+=1
            cnt+=1
        elif my_list1[num1]>my_list2[num2]:
            num2+=1
        else:
            num1+=1
    print(cnt)