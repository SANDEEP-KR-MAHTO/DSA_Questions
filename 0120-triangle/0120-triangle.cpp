class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // dp[i][j] = minimum path sum required to reach (i,j) from the bottom
        // i,j
        // Recusion Relation
        // Base case
        int m = triangle.size();
        vector<vector<int>> dp = triangle;

        for(int i=m-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
            }
        }

        return dp[0][0];
    }
};