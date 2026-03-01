class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    
       int n = nums.size();
       sort(nums.begin(), nums.end());
       int ClosestSum = nums[0]+nums[1]+nums[2];

       for(int i = 0; i<n-2; i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
            int CurrentSum = nums[i]+nums[j]+nums[k];

            if(abs(CurrentSum-target)< abs(ClosestSum-target)){
                ClosestSum = CurrentSum;
            }
            if(CurrentSum <target){
                j+=1;
            }
            else if(CurrentSum>target){
                k-=1;
            }
            else{
                return CurrentSum;
            }
        }
       }

       return ClosestSum;
    
    }   
};  
        