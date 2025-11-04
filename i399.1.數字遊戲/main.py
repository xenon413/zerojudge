imax = 0
A = [int(x) for x in input().split()]
#get P
for i in set(A):
    temp = A.count(i)
    if temp > imax:
        imax = temp

data = list(set(A))
data.sort(reverse=True)
print(imax, *data)