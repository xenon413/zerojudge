dic = {"A": '10', "J": '18', "S": '26', "B": '11', "K": '19', "T": '27', "C": '12', "L": '20', "U": '28', "D": '13', "M": '21', "V": '29', "E": '14',"N": '22', "W": '32', "F": '15', "O": '35', "X": '30', "G": '16', "P": '23', "Y": '31', "H": '17', "Q": '24', "Z": '33', "I": '34', "R": '25'}
test = "87654321"
ssn = input()
check = ssn[-1]
ans = ''
for i in range(65, 91):
    num = dic[chr(i)]
    total = 0
    total += int(num[0])
    total += int(num[1]) * 9
    for k in range(len(test)):
        total += int(test[k]) * int(ssn[k])
    if int(check) == (10 - (total % 10))%10:
        ans += chr(i)
print(ans)