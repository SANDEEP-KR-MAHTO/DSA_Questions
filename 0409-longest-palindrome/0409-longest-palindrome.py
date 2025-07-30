class Solution:
    def longestPalindrome(self, s: str) -> int:
        odd_set = set()
        length = 0
        for c in s:
            if c in odd_set:
                odd_set.remove(c)
                length += 2
            else:
                odd_set.add(c)

        if len(odd_set) != 0:
            length = length + 1

        return length 

            

