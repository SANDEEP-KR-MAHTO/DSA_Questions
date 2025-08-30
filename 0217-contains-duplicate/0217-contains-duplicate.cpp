class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j=1;
        bool flag = false;
        for(int i = 0; i < nums.size(); i++){
            if(j < nums.size()){
                if(nums[i] == nums[j]){
                    flag = true;
                    break;
                }
                else{
                    j += 1;
                }
            }
        }
        if(flag == true){
            return true;
        }
        else{
            return false;
        }
        
    }
};