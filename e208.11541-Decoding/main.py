n=eval(input())
num=""
letter=""
for i in range(n):
    code=input()
    print("Case "+str(i+1)+": ",end="")
    k=0
    while k<len(code):
        while not code[k].isdigit() and k<len(code):
            letter+=code[k]
            k+=1

        while k<len(code) and code[k].isdigit():
            num+=code[k]
            k+=1
        #print(num)
        for j in range(eval(num)):
            print(letter,end="")
        num=""
        letter=""
    print()