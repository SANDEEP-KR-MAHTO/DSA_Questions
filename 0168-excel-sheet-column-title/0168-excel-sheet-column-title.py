class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        l =[]
        while columnNumber>0:
            columnNumber-=1
            curr = columnNumber% 26
            l.append(chr(curr+ord('A')))
            columnNumber=int(columnNumber/26)

        return ''.join(l[::-1])
        