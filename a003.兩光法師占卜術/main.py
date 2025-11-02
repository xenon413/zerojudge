str=input().split()
ans=(eval(str[0])*2+eval(str[1]))%3
print(["普通","吉","大吉"][ans])#(M*2+D)%3