class Solution:
    def maximumSum(self, arr: List[int]) -> int:
        n = len(arr)
        currMaxSum = arr[0]
        maxSum = arr[0]
        oneDelete = 0

        for i in range(1, n):
            oneDelete = max(oneDelete+arr[i], currMaxSum)
            currMaxSum = max(currMaxSum+arr[i], arr[i])
            maxSum = max(maxSum, max(oneDelete, currMaxSum))

        return maxSum
        