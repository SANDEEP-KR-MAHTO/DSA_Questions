class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        int left =0;
        int right = 0;
        int minLen = INT_MAX;
        while(right<n){
            sum = sum + nums[right];
            
            while(sum>=target){
                minLen = min(minLen, right-left+1);
                sum = sum - nums[left];
                left++;
            }
                
        
            right++;
            
        }
        if(minLen==INT_MAX){
            return 0;
        }
        else{
            return minLen;
        }
        
    }
};