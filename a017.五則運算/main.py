try:
    while True:
        num=input().split()
        string=""
        for i in range(len(num)):
            if num[i]=="/":
                string+="//"
            else:
                string+=num[i]
        print(eval(string))
except EOFError:
    pass