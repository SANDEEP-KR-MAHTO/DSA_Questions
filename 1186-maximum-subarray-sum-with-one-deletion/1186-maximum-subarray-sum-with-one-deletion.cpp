class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int currMaxSum = arr[0];
        int maxSum  = arr[0];
        int oneDelete = 0;

        for(int i =1; i<n; i++){
            oneDelete = max(oneDelete+arr[i], currMaxSum);
            currMaxSum = max(currMaxSum+arr[i], arr[i]);
            maxSum = max(maxSum, max(oneDelete, currMaxSum));
        }
        
        return maxSum;
    }
};