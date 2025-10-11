class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        low =0
        high = len(arr)

        while(low<high):
            mid = low + (high-low)//2
            missing = arr[mid]-(mid+1)

            if missing<k:
                low = mid+1

            else:
                high = mid

        return low + k        