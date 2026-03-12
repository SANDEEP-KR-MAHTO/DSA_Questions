class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currMaxSum = nums[0];
        int maxSum = nums[0];
        int minSum = nums[0];
        int currMinSum = nums[0];
        int total = nums[0];

        for(int i=1; i<n; i++){
            currMaxSum = max(currMaxSum+nums[i], nums[i]);
            maxSum = max(maxSum, currMaxSum);

            currMinSum = min(currMinSum+nums[i], nums[i]);
            minSum = min(minSum, currMinSum);
            
            total = total+nums[i];
        }
        if (total-minSum <= 0){
            return maxSum;
        }

        return max(maxSum, total-minSum);
        
    }
};