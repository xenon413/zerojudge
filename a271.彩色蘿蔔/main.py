k = int(input())
for _ in range(k):
    x, y, z, w, n, m = map(int, input().split())

    poison = 0
    days = map(int, input().split())

    for day in days:
        m-=poison

        if m <= 0:
            print("bye~Rabbit")
            break
        if day == 1:
            m+=x
        elif day == 2:
            m+=y
        elif day == 3:
            m-=z
        elif day == 4:
            poison += n
            m-=w
        if m <= 0:
            print("bye~Rabbit")
            break

    else:
        print(f"{m}g")
