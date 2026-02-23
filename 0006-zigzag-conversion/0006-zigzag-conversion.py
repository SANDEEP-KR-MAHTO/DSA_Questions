class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows==1 or numRows>= len(s):
            return s

        l = []
        for i in range(numRows):
            l.append([])
        row=0
        result = ''
        flag=True

        for c in s:
            l[row].append(c)

            if row==0:
                flag=True
            elif row == numRows-1:
                flag=False
            
            if flag:
                row+=1
            else:
                row-=1

        for c in l:
            result += ''.join(c)

        return result

        