class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int pos = n-1;
        int left = 0;
        int right= n-1;
        while(left<=right){
            int left_sq = nums[left]*nums[left];
            int right_sq = nums[right]* nums[right];
            if(left_sq >= right_sq){
                result[pos] = left_sq;
                left++;
               
            }
            else{
                result[pos] = right_sq;
                right--;
            }
            pos--;
        }
        
        return result;
    }
};