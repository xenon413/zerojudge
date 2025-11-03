n = int(input())

cost1 = n*3

cost2 = 299
if n > 300:
    cost2+=(n-300)*3

cost3 = 699
if n > 750:
    cost3+=(n-750)*3

print(min(cost1, cost2, cost3))