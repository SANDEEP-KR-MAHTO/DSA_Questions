class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        low = 0
        high = len(nums)-1

        while(low<=high):
            mid = low + (high-low)//2
            if nums[mid]==target:
                return True
            
            # To handle duplicates
            if nums[low]==nums[mid] and nums[high]==nums[mid]:
                low += 1
                high -=1

            # Left half sorted
            elif nums[low]<= nums[mid]:
                if nums[low]<=target and target<nums[mid]:
                    high = mid-1
                else:
                    low = mid + 1

            # Right half sorted
            else:
                if nums[mid]<target and target<=nums[high]:
                    low= mid+1
                else:
                    high = mid -1

        return False
        