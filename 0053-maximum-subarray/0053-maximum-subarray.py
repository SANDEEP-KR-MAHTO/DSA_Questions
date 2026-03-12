class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n = len(nums)
        currentSum = nums[0]
        maxSum = nums[0]

        for i in range(1, n):
            currentSum = max(currentSum+nums[i], nums[i])
            maxSum = max(maxSum, currentSum)

        return maxSum
        