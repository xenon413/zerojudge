# all input
a, b = map(int, input().split())
e_stack = []
for i in range(a):
    e_stack.append(input())
encode_text = input()


# decode function
def decode(text: str, key: str) ->str:
    # second step go first
    decode_text = ''
    # reverse because count from behind
    key = key[::-1]
    text = text[::-1]
    for i in range(len(key)):
        if key[i] == '0':
            decode_text = text[i] + decode_text
        else:
            #if key[i] == '1'
            decode_text += text[i]
    #first step
    ones = key.count('1')
    if ones % 2 == 1:
        # if len is even
        if len(decode_text) % 2 == 0:
            front = decode_text[0:len(decode_text)//2]
            back = decode_text[len(decode_text)//2:]
            decode_text = back + front
        else:# if len is odd
            front = decode_text[0:len(decode_text) // 2]
            mid = decode_text[len(decode_text) // 2]
            back = decode_text[len(decode_text)//2 + 1:]
            decode_text = back + mid + front
    return decode_text


while len(e_stack) > 0:
    e = e_stack.pop()
    encode_text = decode(encode_text, e)

print(encode_text)