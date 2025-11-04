from itertools import tee


def flip(lst):  #1
    lst.reverse()
def rotate(lst):  #0
    # row
    new_lst = []
    for i in range(len(lst)):
        temp = lst[i]
        temp.reverse()
        if i == 0:
            for i in temp:
                new_lst.append([])
        for k, mp in enumerate(temp):
            new_lst[k].append(mp)
    return new_lst


try:
    while True:
        r, c, m = input().split()
        matrix = []
        for i in range(int(r)):
            matrix.append([x for x in input().split()])
        m_lst = [x for x in input().split()]
        m_lst.reverse()
        # command
        for i in m_lst:
            if i == '1':
                flip(matrix)
            else:
                matrix = rotate(matrix)
        #output
        print(len(matrix), len(matrix[0]))
        for i in matrix:
            print(*i)

except EOFError:
    pass