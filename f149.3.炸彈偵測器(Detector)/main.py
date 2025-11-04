'''
5 5
0 0 0 0 0
1 5 1 0 0
0 0 0 5 0
1 5 1 0 0
0 0 0 0 0
'''

x,y=map(int, input().split())
imap=[]
total=0
for i in range(x):
    pro= list(map(int, input().split()))
    imap.append(pro.copy())
    try:
        total += pro.count(1)
    except TypeError:
        pass
detect=0
#print(imap)
for i in range(x):
    for k in range(y):
        if imap[i][k]==5:
            bomb=0
            flage = True
            ilist=[]
            for j in range(i-1,i+2):
                if j<0:
                    continue
                for q in range(k-1, k+2):
                    #print(j,q)
                    if q<0:
                        continue
                    if j==i and q==k:
                        continue
                    try:
                        if imap[j][q]==5:
                            #print("F")
                            flage=False
                            for v in ilist:
                                imap[v[0]][v[1]]=1
                            break
                        if imap[j][q]==1:
                            bomb+=1
                            imap[j][q]=0
                            ilist.append([j,q])
                    except IndexError:
                        continue
                if flage==False:
                    break
            if flage==True:
                detect+=bomb
print(detect,total-detect)