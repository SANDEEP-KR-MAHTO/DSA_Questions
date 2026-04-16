class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // dp[i]= minimum no of coins required to make amount i
        // Recursion Realtion
        // Base case
        int n = amount;
        vector<int> dp(n+1, INT_MAX);

        dp[0]=0;

        for(int i=1; i<n+1; i++){
            for(auto c: coins){
                if(i-c>=0 && dp[i-c]!=INT_MAX){
                    dp[i] = min(dp[i], 1+dp[i-c]);
                }
            }
        }
        if(dp[n]==INT_MAX){
            return -1;
        }
        return dp[n];
        
    }
};