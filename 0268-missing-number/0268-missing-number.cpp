class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int add = 0;
        int n = nums.size();
        int sum = (n*(n+1))/2;
        for(int i=0; i< n; i++){
            add = add + nums[i];
        }
        return sum - add;
    }
};