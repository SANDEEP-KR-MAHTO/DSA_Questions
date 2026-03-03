class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n= nums.size();
        vector<int> vec = nums;
        sort(vec.begin(), vec.end());

        int left = 0;
        int right = n-1;

        if( vec == nums){
            return 0;
        }
        
        while(left<n){
            if(nums[left]!=vec[left]){
                break;
            }
            left++;
        }
        while(right>0){
            if(nums[right]!=vec[right]){
                break;
            }
            right--;
        }
            
        
        return right - left + 1;
        
    }
};