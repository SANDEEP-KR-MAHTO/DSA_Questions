class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        string1 = Counter(ransomNote)
        string2 = Counter(magazine)

        if string1 & string2 == string1:
            return True
        return False
        