class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        sum1=0
        sum2=0
        for c in s:
            sum1 += ord(c)

        for c in t:
            sum2 += ord(c)

        letter = sum2-sum1
        return chr(letter)
        