class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // unordered_map<int, int> mpp;
        int n = numbers.size();
        // for(int i=0; i<n; i++){
        //     mpp[numbers[i]] = i; 
        // }

        int left=0;
        int right=n-1;
        while(left<=right){
            if(numbers[left]+numbers[right]==target){
                return {left+1, right+1};
            }
            else if(numbers[left]+numbers[right]<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};
        
    }
};