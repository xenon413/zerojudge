class Run_length_coding:
    def __init__(self, code:str):
        count = [0, 0]
        self.encode_code = ''
        for i in code:
            if i == '0':#if code is 0
                if count[1] != 0:#if already count 1
                    bin_lst = self._int_to_bin(count[1])
                    for k in bin_lst:
                        self.encode_code += '1'
                        self.encode_code += k + ' '
                    count[1] = 0#reset count
                count[0] += 1
            elif i == '1':#if code is 1
                if count[0] != 0:
                    bin_lst = self._int_to_bin(count[0])
                    for k in bin_lst:
                        self.encode_code += '0'
                        self.encode_code += k + ' '
                    count[0] = 0#reset count
                count[1] += 1
            else:#if code is not 1 or 0 break
                self.encode_code = '-1'
                break
        #check left over
        if self.encode_code != '-1':
            if count[0] != 0:
                bin_lst = self._int_to_bin(count[0])
                for k in bin_lst:
                    self.encode_code += '0'
                    self.encode_code += k + ' '
                count[0] = 0  # reset count
            elif count[1] != 0:
                bin_lst = self._int_to_bin(count[1])
                for k in bin_lst:
                    self.encode_code += '1'
                    self.encode_code += k + ' '
                count[1] = 0  # reset count

    def _int_to_bin(self, frq: int) -> list:#for frq
        bin_frq = []
        if frq >= 7:
            bin_frq = ['111' for x in range(frq//7)]
        frq = bin(frq % 7)[2:]
        if frq != '0':
            while len(frq) < 3:
                frq = '0' + frq
            bin_frq.append(frq)
        return bin_frq


if __name__ == '__main__':
    row = int(input())
    for i in range(row):
        code = input()
        rlc = Run_length_coding(code)

        print(rlc.encode_code, end='')
        if rlc.encode_code != '-1':
            print(round((len(rlc.encode_code) - rlc.encode_code.count(' '))*100/len(code)), '%', sep='')
        else:
            print()