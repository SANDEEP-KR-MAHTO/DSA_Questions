class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;

        for(int i=0; i<k; i++){
            windowSum += nums[i];
        }

        double maxSum = windowSum;

        int l=0;
        int r = k;

        while(r<nums.size()){
            windowSum += nums[r];
            windowSum -= nums[l];

            maxSum = max(maxSum, windowSum);

            l++;
            r++;
        }

        return maxSum/k ;
        
    }
};