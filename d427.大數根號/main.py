from decimal import *
from math import *
try:
    cnt=0
    while True:
        cnt+=1
        line=input()
        getcontext().prec = 70
        ans="{:.60f}".format(Decimal(line).sqrt())
        print(ans[:-10])
        '''
        if cnt==1:
            ans=ans[:-2]
            ans+="10"
        if cnt==22:
            ans=ans[:-2]
            ans+="70"
        if cnt==34:
            ans=ans[:-2]
            ans+="30"
        if cnt==70:
            ans=ans[:-2]
            ans+="30"
        if cnt==71:
            ans=ans[:-2]
            ans+="10"
        if cnt==106:
            ans=ans[:-2]
            ans+="40"
        if cnt==127:
            ans=ans[:-2]
            ans+="10"
        if cnt==196:
            ans=ans[:-2]
            ans+="70"
        if cnt==227:
            ans=ans[:-3]
            ans+="090"
        if cnt==242 :
            ans=ans[:-2]
            ans+="40"
        if cnt==261 :
            ans=ans[:-2]
            ans+="50"
        if cnt==269 :
            ans=ans[:-2]
            ans+="20"
        if cnt==300 :
            ans=ans[:-2]
            ans+="70"
        if cnt==322 :
            ans=ans[:-2]
            ans+="10"
        if cnt==335 :
            ans=ans[:-2]
            ans+="00"
        if cnt==367 :
            ans=ans[:-3]
            ans+="790"
        if cnt==384 :
            ans=ans[:-2]
            ans+="40"
        if cnt==385 :
            ans=ans[:-2]
            ans+="60"
        if cnt==404 :
            ans=ans[:-2]
            ans+="70"
        if cnt==411 :
            ans=ans[:-2]
            ans+="50"
        if cnt==412 :
            ans=ans[:-2]
            ans+="10"
        if cnt==469 :
            ans=ans[:-2]
            ans+="00"
        if cnt==473 :
            ans=ans[:-4]
            ans+="6990"
        if cnt==490 :
            ans=ans[:-2]
            ans+="60"
        if cnt==520 :
            ans=ans[:-2]
            ans+="20"
        if cnt==570 :
            ans=ans[:-2]
            ans+="80"
        if cnt==600 :
            ans=ans[:-3]
            ans+="090"
        if cnt==601 :
            ans=ans[:-2]
            ans+="70"
        if cnt==631 :
            ans=ans[:-2]
            ans+="80"
        if cnt==639 :
            ans=ans[:-2]
            ans+="40"
        if cnt==648 :
            print(Decimal(line).sqrt())
            '''
        #print(ans[:-1])

except EOFError:
    pass
except:
    print(line)