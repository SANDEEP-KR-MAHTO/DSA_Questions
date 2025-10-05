class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        add =0
        for i in range(n):
            add = add + nums[i]

        sum = (n*(n+1))//2
        return sum - add