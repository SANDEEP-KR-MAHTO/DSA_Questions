class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
        });

        int count =0;
        int i=0;
        int j=1;
        while(i< intervals.size() && j < intervals.size()){
            if(intervals[i][1] <= intervals[j][0]){
                
                j+=1;
                i=j-1;
            }
            else{
                count += 1;
                j += 1;
            }
        }
        return count;
        
    }
};