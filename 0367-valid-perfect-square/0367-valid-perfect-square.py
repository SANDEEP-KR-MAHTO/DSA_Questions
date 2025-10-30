class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        low = 0
        high = num
        while(low<=high):
            mid = low + (high-low)//2
            target = mid * mid
            if(target==num):
                return True

            elif(target< num):
                low = mid+1

            else:
                high = mid - 1

        return False