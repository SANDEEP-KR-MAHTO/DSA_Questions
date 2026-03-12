class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        n = len(nums)
        currMaxSum = nums[0]
        maxSum = nums[0]

        currMinSum = nums[0]
        minSum = nums[0]

        for i in range(1, n):
            currMaxSum = max(currMaxSum+nums[i], nums[i])
            maxSum = max(maxSum, currMaxSum)

            currMinSum = min(currMinSum+nums[i], nums[i])
            minSum = min(minSum, currMinSum)

        return  max(abs(maxSum), abs(minSum))
        