class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        n = len(word)
        upperCount = 0
        for c in word:
            if c.isupper():
                upperCount += 1

        if upperCount == n:
            return True
        if upperCount == 0:
            return True
        if upperCount == 1 and word[0].isupper():
            return True
        else:
            return False


        