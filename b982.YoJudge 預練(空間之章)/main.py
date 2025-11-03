try:
    while True:
        x = input()
        if "gb" in x:
            temp = x.replace("gb", "")
            r = int(temp)*10**9*8

        elif "mb" in x:
            temp = x.replace("mb", "")
            r = int(temp)*10**6*8

        elif "kb" in x:
            temp = x.replace("kb", "")
            if "." in x:
                temp = temp.split(".")
                r = int(temp[0])*10**3*8
                r += int(temp[1])*100*8

            else:
                r = int(temp)*10**3*8

        elif "byte" in x:
            temp = x.replace("byte", "")
            if "." in x:
                temp = temp.split(".")
                r = int(temp[0])*8
                r += int(temp[1])
            else:
                r = int(temp)*8

        elif "bit" in x:
            r = int(x.replace("bit", ""))
            
        elif "g" in x and "m" in x:
            temp = x.replace("g", " ")
            temp = temp.replace("m", " ")
            

            if "k" in x:
                temp = temp.replace("k", "")
                temp = temp.split()
                r = int(temp[0])*10**9*8
                r += int(temp[1])*10**6*8
                r += int(temp[2])*10**3*8
            else:
                temp = temp.split()
                r = int(temp[0])*10**9*8
                r += int(temp[1])*10**6*8


        elif "m" in x and "k" in x:
            temp = x.replace("m", " ")
            temp = temp.replace("k", " ")
            temp = temp.split()
            r = int(temp[0])*10**6*8
            r += int(temp[1])*10**3*8
        print(r)

except EOFError:
    pass