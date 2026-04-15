class Solution {
public:
    int climbStairs(int n) {
        // what is dp[i]?
        // how to reach i step
        // recursion relation
        // base case
        vector<int> dp(n+1);

        dp[0]=1;
        dp[1]=1;

        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];

        
    }
};