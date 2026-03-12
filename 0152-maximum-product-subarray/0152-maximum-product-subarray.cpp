class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int currMaxProd = nums[0];
        int currMinProd = nums[0];
        int maxProd = nums[0];

        for(int i =1; i<n; i++){

            int temp = currMaxProd;
            currMaxProd = max({currMaxProd*nums[i], currMinProd*nums[i], nums[i]});
            currMinProd = min({currMinProd*nums[i], temp*nums[i], nums[i]});
            maxProd = max(maxProd, currMaxProd);
        }

        return maxProd;
        
    }
};