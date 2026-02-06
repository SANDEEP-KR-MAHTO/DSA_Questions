class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        int n = matrix.size();
        bool flag=false;
        
        for(int i =0; i<n; i++){
            int low = 0;
            int high= m-1;
           
            while(low<=high){
                int mid = low+ (high-low)/2;
                if(matrix[i][mid]==target){
                    flag = true;
                    return flag;
                }
                else if(matrix[i][mid]< target){
                    low= mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            if(flag){
                break;
            }
        }
        return flag;
    }
};