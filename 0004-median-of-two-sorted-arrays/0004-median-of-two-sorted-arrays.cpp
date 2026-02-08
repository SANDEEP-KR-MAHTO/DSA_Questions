class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n = nums2.size();
        int i=0;
        int j=0;
        vector<int> result;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
            // else{
            //     result.push_back(nums1[i]);
            //     result.push_back(nums2[j]);
            //     i++;
            //     j++;
            // }
        }
        while(j<n){
            result.push_back(nums2[j]);
            j++;
        }
        
        
        while(i<m){
            result.push_back(nums1[i]);
            i++;
        }
        

        
        if((m+n)%2!=0){
            return result[(m+n)/2];
        }
        else{
            int a=(m+n)/2;
            int b= ((m+n)/2)-1;
            return (result[a]+result[b])/2.0;
        }
    }
};