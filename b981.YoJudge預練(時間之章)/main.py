from datetime import time, datetime
try:
    while True:
        x = input()
        if "hour" in x:
            t = time(int(x.replace("hour", "")))

        elif "h" in x and "m" in x and "s" in x:
            temp = x.replace("h", " ")
            temp = temp.replace("m", " ")
            temp = temp.replace("s", "")
            temp = temp.split()
            h = int(temp[0])
            m = int(temp[1])
            s = int(temp[2])
            t = time(h, m, s)

        elif "h" in x and "m" in x:
            temp = x.replace("h", " ")
            temp = temp.replace("m", "")
            temp = temp.split()
            h = int(temp[0])
            m = int(temp[1])
            t = time(h, m)

        elif "min" in x:
            t = time(minute=int(x.replace("min", "")))

        elif "ms" in x:
            t = time(microsecond=int(x.replace("ms", ""))*1000)

        elif "m" in x and "s" in x:
            temp = x.replace("m", " ")
            temp = temp.replace("s", "")
            temp = temp.split()
            m = int(temp[0])
            s = int(temp[1])
            t = time(minute=m, second=s)

        elif "s" in x and "." in x:
            temp = x.replace("s", "")
            temp = temp.split(".")
            t = time(second=int(temp[0]), microsecond=int(temp[1])*100000)

        elif "s" in x:
            t = time(second=int(x.replace("s", "")))

        print((((t.hour * 3600 + t.minute * 60 + t.second) * 1_000_000) + t.microsecond)//1000)
except EOFError:
    pass
