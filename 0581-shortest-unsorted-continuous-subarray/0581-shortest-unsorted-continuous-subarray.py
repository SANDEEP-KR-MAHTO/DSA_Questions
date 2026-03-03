class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        vec = nums.copy()
        vec.sort()

        left = 0
        right= n-1
        while(left<n):
            if(nums[left]==vec[left]):
                left+=1
            else:
                break

        if(left==n):
            return 0

        while(right>=0):
            if(nums[right]==vec[right]):
                right-=1
            else:
                break

        return right-left+1
        
        