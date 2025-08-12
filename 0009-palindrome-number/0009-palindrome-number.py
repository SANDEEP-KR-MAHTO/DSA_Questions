class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        else:
            sum=0
            temp = x
            while x > 0:
                r = x % 10
                sum = sum *10 + r
                x = x//10
            print(sum)
            if int(sum) == temp:
                return True
            else:
                return False
        