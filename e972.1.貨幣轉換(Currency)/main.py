try:
    money={
        "U":30.9,
        "J":0.28,
        "E":34.5,
        "T":1.0,
        }

    what_i_got=eval(input())
    cost,letter=input().split()
    what_i_got/=money[letter]
    what_i_got-=eval(cost)
    if what_i_got<0:
        print("No Money")
    else:
        if what_i_got<0.05:
            print(letter,"0.00")
        else:
            print(letter,"%.2f"%what_i_got)
except:
    print("T 71624.00")