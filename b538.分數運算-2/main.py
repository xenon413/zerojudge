from fractions import Fraction

try:
    while True:
        l = list(input().split())
        num = list(map(int, l[:-1]))
        op = l[-1]
        a = Fraction(num[0], num[1])
        b = Fraction(num[2], num[3])
        if op == "+":
            c = a+b
        elif op == "-":
            c = a-b
        elif op == "*":
            c = a*b
        elif op == "/":
            c = a/b
        
        if c.denominator == 1:
            print(c.numerator)
        else:
            print(f"{c.numerator}/{c.denominator}")
        
except EOFError:
    pass
