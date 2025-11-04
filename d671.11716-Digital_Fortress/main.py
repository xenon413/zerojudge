def isint(num):
    if num-int(num) == 0:
        return True
    return False


row = input()
for i in range(int(row)):
    string = input()
    ans = ""
    if isint(len(string)**0.5):
        for k in range(int(len(string)**0.5)):
            j = k
            while j < len(string):
                ans += string[j]
                j += int(len(string)**0.5)
        print(ans, '\n', sep="")

    else:
        print("INVALID\n")