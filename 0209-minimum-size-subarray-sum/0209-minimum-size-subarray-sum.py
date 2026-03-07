class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        n = len(nums)
        left =0
        right = 0
        sum =  0
        minLen = float('inf')
        while(right<n):
            sum   = sum + nums[right]
            while(sum>=target):
                minLen = min(minLen, right-left+1)
                sum = sum - nums[left]
                left+=1
            else:
                right += 1
        
        if minLen == float('inf'):
            return 0
        else:
            return minLen
        