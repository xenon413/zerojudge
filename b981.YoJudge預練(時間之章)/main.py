from datetime import time, datetime
try:
    while True:
        x = input()
        if "hour" in x:
            t = time(int(x.replace("hour", "")))

        elif "h" in x and "m" in x and "s" in x:
            h = 

        print(((t.hour * 3600 + t.minute * 60 + t.second) * 1_000_000) + t.microsecond)*1000

except EOFError:
    pass
