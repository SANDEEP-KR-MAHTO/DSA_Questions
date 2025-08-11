class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0
        for c in nums[:]:
            if c == val:
                nums.remove(c)

        return len(nums)
        