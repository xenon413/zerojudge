try:
    while True:
        num=list(map(int,input().split()))
        print(num[0]*num[1]%num[2])

except EOFError:
    pass