class Solution {
public:
    int uniquePaths(int m, int n) {

        // dp[i][j] = number of unique path to reach cell(i,j)
        // i,j = ceil of 2D array
        // Recursion Relation
        // Base Case
        vector<vector<int>> dp(m, vector<int>(n));   // If I do (n,1) here

        for(int i=0; i<m; i++){
            
            for(int j=0; j<n; j++){
                if(i==0 || j==0){      // then  no need to write this
                    dp[i][j]=1;
                }
                else{
                    dp[i][j] = dp[i][j-1] + dp[i-1][j];
                }
                
            }
        }
        return dp[m-1][n-1];
    }
};