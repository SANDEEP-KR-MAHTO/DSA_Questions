class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n = len(nums)
        l = []
        for i in range(n):
            l.append(0)

        left = 0
        right = n-1
        pos=n-1
        while(left<=right):
            left_sq = nums[left]*nums[left]
            right_sq= nums[right]*nums[right]
            if(left_sq >= right_sq):
                l[pos] = left_sq
                left += 1
            
            else:
                l[pos] = right_sq
                right -= 1

            pos -= 1
        return l
        