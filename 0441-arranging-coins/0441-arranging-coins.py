class Solution:
    def arrangeCoins(self, n: int) -> int:
        low = 0
        high = n
        while(low<=high):
            mid = low + (high-low)//2
            coins = mid * (mid+1)//2
            if coins == n:
                return mid

            elif coins<n:
                low = mid + 1
            else:
                high = mid -1

        return high        