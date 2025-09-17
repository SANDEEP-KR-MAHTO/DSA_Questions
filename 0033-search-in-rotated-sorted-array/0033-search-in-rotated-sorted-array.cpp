class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            
            if(mpp.find(nums[i]) != mpp.end()){
                continue;
            }
            else{
                mpp[nums[i]]=i;
            }
        }
        sort(nums.begin(), nums.end());

        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] < target){
                low = mid + 1;
            }
            else if(nums[mid] > target){
                high = mid -1;
            }
            else{
                int index = mpp[nums[mid]];
                return index;
            }
        }
        return -1;
        
    }
};