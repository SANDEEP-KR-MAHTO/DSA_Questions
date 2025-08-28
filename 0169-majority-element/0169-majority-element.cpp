class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j=0;
        int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if ( nums[j] == nums[i]){
                count += 1;
                if (count > nums.size()/2){
                    return nums[j];
                }
            }
            else{
                j=i;
                count = 1;
            }
        }
        return nums[j];
        
    }
};