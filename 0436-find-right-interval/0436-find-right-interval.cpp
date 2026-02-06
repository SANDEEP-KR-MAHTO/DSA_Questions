class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> starts;
        vector<int> ends;
        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++){
            starts.push_back(intervals[i][0]);
            ends.push_back(intervals[i][1]);
            mpp[intervals[i][0]] = i;
        }

        sort(starts.begin(), starts.end());
        vector<int> results(n,-1);

        for(int i=0; i<n; i++){

            int low=0;
            int high=n-1;
            int pos=-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(starts[mid]>=ends[i]){
                    pos= mid;
                    high= mid-1;
                }
                
                else{
                    low = mid+1;
                }
            if(pos!=-1){
                results[i] = mpp[starts[pos]];
            }
            else{
                results[i] = -1;
            }
            }
        }
        return results;
        
    }
};