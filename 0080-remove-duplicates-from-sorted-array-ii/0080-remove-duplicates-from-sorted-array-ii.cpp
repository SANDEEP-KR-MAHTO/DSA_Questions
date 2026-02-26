class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2;
        int j=2;
        int n = nums.size();
        if(n<=2){
            return n;
        }
        while(j<n){
            if(nums[j] != nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }
        return i;
        
    }
};