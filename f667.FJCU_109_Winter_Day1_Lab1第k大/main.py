mylist=[]
while True:
    n=int(input())
    if n==-1: break
    mylist.append(n)
mylist.sort()
num=int(input())
print(mylist[-num])