class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        index = 0
        for c in nums:
            index ^= c
        return index