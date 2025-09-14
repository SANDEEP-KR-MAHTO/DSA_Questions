class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> l;
        // vector<int> p;
        for(int i=0; i< nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int new_target = 0 - nums[i];
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k] > new_target){
                    k--;
                }
                else if(nums[j]+nums[k] == new_target){
                    // p.push_back(nums[i]);
                    // p.push_back(nums[j]);
                    // p.push_back(nums[k]);
                    l.push_back({nums[i], nums[j], nums[k]});
                    while(j<k && nums[j]==nums[j+1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k-1]){
                        k--;
                    }
                    j++;
                    k--;
                    
                }
                else{
                    j++;
                }
            }
            
        }
        return l;
        
        
    }
};