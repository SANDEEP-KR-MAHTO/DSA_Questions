class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        j = 0
        count = 1
        for i in range(1, len(nums)):
            if nums[j] == nums[i]:
                count += 1
                if count > len(nums)/2:
                    return nums[j]

            else:
                j = i
                count = 1

        return nums[j]
        