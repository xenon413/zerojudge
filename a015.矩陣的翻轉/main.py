try:
    while True:
        m,n=map(int,input().split())
        mylist=[]
        for i in range(m):
            mylist.append([int(x) for x in input().split()])
        for i in range(n):
            for k in range(m):
                print(mylist[k][i],end=' ')
            print()
except EOFError:
    pass