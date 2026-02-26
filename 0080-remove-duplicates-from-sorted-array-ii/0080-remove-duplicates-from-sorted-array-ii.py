class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=2
        j=2
        if(len(nums)<=2):
            return len(nums)

        while(j<len(nums)):
            if(nums[j] != nums[i-2]):
                nums[i] = nums[j]
                i += 1

            j+=1
        return i
        