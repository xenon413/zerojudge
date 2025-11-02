n = input()
l = list(map(int, input().split()))
l.sort()
d = {}
for i in set(l):
    d[i] = l.count(i)

imax = max(d.values())
res = []
for k, v in d.items():
    if v == imax:
        res.append(k)

for i in res:
    print(i, imax)
