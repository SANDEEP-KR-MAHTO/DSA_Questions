class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> l;
        int index1=0;
        int index2=0;
        int i=0;
        int j=nums.size()-1;
        bool flag=false;
        if(nums.size()<2){
            if(nums.size()==0){
                return {-1,-1};
            }
            else if(nums[0]==target){
                return {0,0};
            }
        }
        else{
            while(i<=j){
                if(nums[i]==target){
                    index1 = i;
                    while(i<j && nums[i]==nums[i+1]){
                        
                        i++;
                    }
                    index2=i;
                    l.push_back(index1);
                    l.push_back(index2);
                    flag = true;
                    break;
                }
                else{
                    i++;
                }
            }
            
    }
    if(flag==true){
        return l;
    }
    else{
        return {-1,-1};
    }
        
    }
};