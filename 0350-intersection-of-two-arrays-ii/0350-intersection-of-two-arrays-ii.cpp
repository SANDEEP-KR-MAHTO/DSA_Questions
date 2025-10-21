class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        vector<int> l;

        for(int i=0; i<nums1.size(); i++){
            mpp[nums1[i]]++;
        }
        for(int j=0; j<nums2.size(); j++){
            if (mpp.find(nums2[j]) != mpp.end() && mpp[nums2[j]] != 0){
                l.push_back(nums2[j]);
                mpp[nums2[j]]--;
            }
        }
        return l;
        
    }
};