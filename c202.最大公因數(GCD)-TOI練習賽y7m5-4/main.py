def GCD(a,b) :
	if b == 0: return a
	return GCD(b, a % b)
try:
    while True:
        input()
        num=[int(x) for x in input().split()]
        a=num[0]
        for i in num[1:]:
            a=GCD(a,i)
        print(a)
except EOFError:
    pass