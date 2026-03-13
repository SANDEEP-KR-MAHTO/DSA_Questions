class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        n = len(nums)
        d = dict()

        # Initializatin
        prefixSum = 0
        count = 0
        d[0]=1

        # Traverse
        for i in range(n):
            prefixSum += nums[i]

            if (prefixSum-k) in d:
                count += d[prefixSum-k]


            if prefixSum not in d:
                d[prefixSum] = 1
            else:
                d[prefixSum] += 1

        # Return
        return count
        
        