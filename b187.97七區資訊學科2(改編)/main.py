try:
    print('十六進位表示法  相對應的十進位表示法')
    while True:
        num1 = input()
        print('      ', num1, '                 ', int(num1, 16), sep='')
except EOFError:
    pass