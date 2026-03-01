class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        int i =0;
        int j = 0;
        int count =0;
        double product = 1;
        if(k<2){
            return 0;
        }
        while(j<n){
            product *= nums[j];

            while(product >= k){
                product /= nums[i];
                i++;
            }
            
            count += j - i + 1;
            j++;
            
        }
        return count;
        
    }
};