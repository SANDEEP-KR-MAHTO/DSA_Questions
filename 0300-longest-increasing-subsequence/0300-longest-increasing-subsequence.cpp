class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // dp[i] = length of LIS ending at i
        // i = index of array
        // Recursion relation
        // Base condition
        int n = nums.size();
        vector<int> dp(n, 1);

        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i], 1+dp[j]);
                    }
                
            }

            
        }
        return *max_element(dp.begin(), dp.end());
        
    }
};