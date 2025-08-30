class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        j=1
        flag= False
        nums.sort()
        for i in range(len(nums)):
            if j < len(nums):
                if nums[i] == nums[j]:
                    flag = True
                    break
                else:
                    j += 1
        if flag:
            return True
        else:
            return False
         
        