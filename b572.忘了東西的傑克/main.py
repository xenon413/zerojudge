from datetime import time, datetime

n = int(input())
for _ in range(n):
    h1, m1, h2, m2, m3 = map(int, input().split())
    t1 = time(h1, m1)
    t2 = time(h2, m2)
    dt1 = datetime.combine(datetime.today(), t1)
    dt2 = datetime.combine(datetime.today(), t2)
    if (dt2 - dt1).total_seconds()/60 >= m3:
        print("Yes")
    else:
        print("No")