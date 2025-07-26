class Solution:
    def isPalindrome(self, s: str) -> bool:
        l=[]
        for c in s:
            if c.isalnum():
                l.append(c)

        p = ''.join(l)
        string = p.lower()
        
        left=0
        right=len(string)-1

        while left < right:
            if string[left] != string[right]:
                return False
            left +=1
            right -= 1

        return True


        for i in range(n//2):
            if string[i]==string[n-i-1]:
                return True
            else:
                return False
        