input()
imap=list(map(int,input().split()))
land=int(input())-1
if not land+1==len(imap) :
    if land==0 or imap[land-1]>imap[land+1]:
        while imap[land+1]<=imap[land]:
            land+=1
        print(land+1)
    else:
        while imap[land - 1] <= imap[land]:
            land -= 1
        print(land + 1)
else:
    while imap[land-1]<=imap[land]:
        land-=1
    print(land+1)