class Solution:
    def reverse(self, x: int) -> int:
        
        
        if x > 0:
            sum = 0
            while x > 0:
                r = x % 10
                sum = sum * 10 + r
                x = x //10
            if sum > 2** 31 -1 or sum < -2 ** 31:
                return 0
            else:
                return sum

        else:
            n = abs(x)
            total = 0
            while n > 0:
                rem = n%10
                total = total * 10 + rem
                n = n//10

            if total > 2** 31 -1 or total < -2 ** 31:
                return 0
            else:
                return -total
        