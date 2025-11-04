#4
#{()<>}[]
#(){
#{(})
#())
n = int(input())
for _ in range(n):
    stack = []
    string = input()
    for i in string:
        flag = True
        if i == '(' or i == '{' or i == '[' or i == '<':
            stack.append(i)
        else:
            if len(stack) !=0:
                if i == ')' and stack[-1] == '(':
                    stack.pop(-1)
                elif i == ']' and stack[-1] == '[':
                    stack.pop(-1)
                elif i == '}' and stack[-1] == '{':
                    stack.pop(-1)
                elif i == '>' and stack[-1] == '<':
                    stack.pop(-1)
                else:
                    print('N')
                    flag = False
                    break
            else:
                print('N')
                flag = False
                break
    if flag:
        if len(stack) == 0:
            print('Y')
        else: 
            print('N')