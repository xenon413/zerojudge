single={
    1:["German Fries",2],
    2:["Durian Slices",3],
    3:["WcFurry",5],
    4:["Chocolate Sunday",7],
}
meal={
    1:["Medium Wac",4],
    2:["WChicken Nugget",8],
    3:["Geez Burger",7],
    4:["ButtMilk Crispy Chicken",6],
    5:["Plastic Toy",3],
}
price=0
while True:
    order=int(input())
    if order==0:
        print("Total:",price)
        break
    num=int(input())
    if order==1:
        price+=meal[num][1]
        print(*meal[num])
    else:
        price+=single[num][1]
        print(*single[num])