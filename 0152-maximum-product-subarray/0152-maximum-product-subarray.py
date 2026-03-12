class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n = len(nums)
        currMaxProd = nums[0]
        currMinProd= nums[0]
        maxProd = nums[0]

        for i in range(1, n):
            temp = currMaxProd
            currMaxProd = max(currMaxProd*nums[i], currMinProd*nums[i], nums[i])
            currMinProd = min(currMinProd*nums[i], temp*nums[i], nums[i])
            maxProd = max(maxProd, currMaxProd)

        return maxProd
        