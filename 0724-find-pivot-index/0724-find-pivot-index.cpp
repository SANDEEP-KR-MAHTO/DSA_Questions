class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(auto c: nums){
            total += c;
        }
        int left_sum =0;
        for(int i =0; i<n; i++){
            int right_sum = total-left_sum-nums[i];

            if(left_sum == right_sum){
                return i;
            }

            left_sum += nums[i];
        }
        return -1;
    }
};