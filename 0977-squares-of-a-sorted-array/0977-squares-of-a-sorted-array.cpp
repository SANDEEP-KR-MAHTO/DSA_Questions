class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i] * nums[i];
            result.push_back(a);
        }
        sort(result.begin(), result.end());
        return result;
    }
};