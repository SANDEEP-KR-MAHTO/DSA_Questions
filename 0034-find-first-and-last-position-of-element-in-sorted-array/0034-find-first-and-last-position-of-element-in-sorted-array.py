class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        i=0
        j=len(nums)-1
        l=[]
        flag=False
        while(i<=j):
            if nums[i]==target:
                index1 = i
                while(i<j and nums[i]==nums[i+1]):
                    i += 1
                index2 = i
                l.append(index1)
                l.append(index2)
                flag=True
                break

            i += 1
            

        if flag:
            return l
        else:
            return [-1, -1]
        