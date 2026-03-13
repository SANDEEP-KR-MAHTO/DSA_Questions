class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;

        //Initialization
        int prefixSum = 0;
        int count = 0;
        mp[0] = 1;

        //Traverse
        for(int i=0; i<n; i++){
            prefixSum += nums[i];

            if(mp.find(prefixSum-k) != mp.end()){
                count += mp[prefixSum-k];
            }

            mp[prefixSum]++;
        }
        
        return count;
    }
};