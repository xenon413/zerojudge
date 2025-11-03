### NA ###
n = int(input())
msg = input()

for i in range(n):
    print(msg[i*n+i], end="")
