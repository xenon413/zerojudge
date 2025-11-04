n=int(input())
ilist=[]
max=0
for i in range(n):
    string=input()
    if len(string)>max:
        max=len(string)
    ilist.append(string)
for i in range(max):
    for k in range(n):
        try:
            if ilist[k][i].isalpha():
                print(ilist[k][i],end="")
        except IndexError:
            pass