class Mirror:
    x = None
    y = None
    left = None
    right = None
    up = None
    down = None
    type = None

    def __repr__(self):
        return f'x= {self.x}, y={self.y}, type={self.type}'



mirror_list = []


# input
row = int(input())
for _ in range(row):
    x, y, t = map(int, input().split())
    temp = Mirror()
    temp.x = x
    temp.y = y
    temp.type = t
    mirror_list.append(temp)


# sort by x and y
def sort_by_x(mirror):
    return mirror.x, mirror.y


def sort_by_y(mirror):
    return mirror.y, mirror.x


# x the same find up down
mirror_list.sort(key=sort_by_x)

for i in range(len(mirror_list) - 1):
    if mirror_list[i].x == mirror_list[i + 1].x:
        mirror_list[i].up = mirror_list[i + 1]
        mirror_list[i + 1].down = mirror_list[i]


mirror_list.sort(key=sort_by_y)
location = None
for i in range(len(mirror_list) - 1):
    if location is None and mirror_list[i].y == 0:
        location = mirror_list[i]
    if mirror_list[i].y == mirror_list[i + 1].y:
        mirror_list[i].right = mirror_list[i + 1]
        mirror_list[i + 1].left = mirror_list[i]

# direction up:0 down:1 left:2 right:3
direction = 2
cnt = 0
while location is not None:
    #print(location.x, location.y, location.type, 'up:', location.up, 'down:', location.down, 'left:', location.left, 'right:', location.right)
    cnt += 1
    # approach direction
    # /
    # direction up:0 down:1 left:2 right:3
    if location.type == 0:
        if direction == 0:  # up
            direction = 3  # right
            location = location.left
        elif direction == 1:  # down
            direction = 2  # left
            location = location.right
        elif direction == 3:  # right
            direction = 0  # up
            location = location.down
        elif direction == 2:  # left
            direction = 1  # down
            location = location.up

    # one's up is other's down
    # \ left2 - down1, right3 - up0
    elif location.type == 1:
        if direction == 0:  # up
            direction = 2  # left
            location = location.right
        elif direction == 1:  # down
            direction = 3  # right
            location = location.left
        elif direction == 2:  # left
            direction = 0  # up
            location = location.down
        elif direction == 3:  # right
            direction = 1  # down
            location = location.up

print(cnt)