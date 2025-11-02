n = int(input())
kill = 0
die = 0
assist = 0
kill_streak = 0
for _ in range(n):
    m = input().strip()
    if m == "Get_Kill":
        kill += 1
        kill_streak += 1
        if kill_streak <3:
            print("You have slain an enemie.")

        elif kill_streak == 3:
            print("KILLING SPREE!")

        elif kill_streak == 4:
            print("RAMPAGE~")

        elif kill_streak == 5:
            print("UNSTOPPABLE!")

        elif kill_streak == 6:
            print("DOMINATING!")

        elif kill_streak == 7:
            print("GUALIKE!")

        elif kill_streak >= 8:
            print("LEGENDARY!")
    
    elif m == "Get_Assist":
        assist += 1

    elif m == "Die":
        if kill_streak < 3:
            print("You have been slained.")
        elif kill_streak >= 3:
            print("SHUTDOWN.")
        kill_streak = 0
        die += 1
    
print(f"{kill}/{die}/{assist}")