class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        n = len(nums)
        d = dict()

        # Initialization
        prefixSum =0
        count = 0 
        d[0]=1

        # Traverse
        for i in range(n):
            prefixSum += nums[i]

            remainder = prefixSum % k

            if(remainder < 0):
                remainder += k
            if remainder in d:
                count += d[remainder]

            if remainder not in d:
                d[remainder] = 1
            else:
                d[remainder] += 1

        return count