try:
    while True:
        m=input()
        letter=m[0]
        time=0
        ansletter=""
        ans=0
        i=0
        while i in range(len(m)):
            if letter==m[i]:
                time+=1
                i+=1
            else:
                if time>ans:
                    ans=time
                    ansletter=letter
                letter=m[i]
                time=0
        if time>ans:
            ans=time
            ansletter=letter
        print(ansletter+" "+str(ans))
except EOFError:
    pass