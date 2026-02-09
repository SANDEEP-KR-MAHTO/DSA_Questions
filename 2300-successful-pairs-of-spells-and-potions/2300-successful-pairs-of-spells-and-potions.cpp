class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> result;

        sort(potions.begin(), potions.end());

        for(int i = 0; i<n; i++){
            long long s = spells[i];
            long long need = (success+s-1)/s;
            int low = 0;
            int high= m-1;
            int pos = m;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(potions[mid]>=need){
                    high= mid -1;
                    pos = mid;
                }
                else{
                    low = mid+1;
                }
            }
            result.push_back(m-pos);
        }
        return result;
        
    }
};