class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }

        sort(nums.begin(), nums.end());

        vector<vector<int>> vec;

        for(int i=0; i< nums.size()-3; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            
            for(int j=i+1; j<nums.size()-2; j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int k=j+1;
                int l = nums.size()-1;
                long long latest_target =  (long long)target - nums[i] - nums[j];

                while(k<l){
                    if(nums[k]+nums[l] > latest_target){
                        l--;
                    }
                    else if(nums[k]+nums[l] < latest_target){
                        k++;
                    }
                    else{
                        vec.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while(k<l && nums[k]==nums[k+1]) k++;
                           
                        
                        while(k<l && nums[l]==nums[l-1]) l--;
                            
                        k++;
                        l--;
                    }
                }
            }
        }
        return vec;
        
    }
};