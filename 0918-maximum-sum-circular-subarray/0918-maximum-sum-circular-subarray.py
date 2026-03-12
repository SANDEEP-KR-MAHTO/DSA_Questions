class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        n = len(nums)
        currMaxSum = nums[0]
        maxSum = nums[0]
        currMinSum = nums[0]
        minSum = nums[0]
        total = nums[0]

        for i in range(1, n):
            currMaxSum = max(currMaxSum+nums[i], nums[i])
            maxSum = max(maxSum, currMaxSum)

            currMinSum = min(currMinSum+nums[i], nums[i])
            minSum = min(minSum, currMinSum)

            total += nums[i]
        
        if(total-minSum <=0):
            return maxSum

        return max(maxSum, total-minSum)
        