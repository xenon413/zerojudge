string=input()
check=False
for i in range(int(len(string)/2)+1):
    if len(string)%2!=0:
        check=True
        break
    if string[i]==string[-1-i]:
        continue
    else:
        check=True
        break
if check==True:
    print("NO")
else:
    print("YES")
    for i in range(int(len(string)/2)):
        print(string[i],end="")