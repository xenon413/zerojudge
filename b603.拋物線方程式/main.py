from fractions import Fraction
try:
    while True:
        h, k, x, y = map(int, input().split())
        b = Fraction(y-k, (x-h)**2)
        a = b.denominator
        b = b.numerator
        c = -2*b*h
        d = (b*h**2+k*a)
        print(f"{a}y = {b}x^2 + {c}x + {d}")


except EOFError:
    pass
