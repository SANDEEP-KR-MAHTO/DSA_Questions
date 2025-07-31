class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        dict = {}
        for c in 'qwertyuiop':
            dict[c] =1
        for c in 'asdfghjkl' :
            dict[c] = 2
        for c in 'zxcvbnm':
            dict[c] = 3

        result = []
        for string in words:
            lw = string.lower()
            r = dict[lw[0]]
            if all(dict[l] == r for l in lw):
                result.append(string)

        return result