input()
lst = list(set(map(int, input().split())))
lst.sort()
print(len(lst))
for i in lst:
    print(i, end=' ')