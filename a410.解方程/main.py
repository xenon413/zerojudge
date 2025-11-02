a, b, c, d, e, f = map(int, input().split())

det = a*e - b*d

if det != 0:
    x = (c*e - b*f) / det
    y = (a*f - c*d) / det
    print("x={:.2f}".format(x))
    print("y={:.2f}".format(y))
else:
    # Determinant zero, check for consistency
    if a*f == c*d and b*f == c*e:
        print("Too many")  # infinitely many solutions
    else:
        print("No answer")  # inconsistent system
