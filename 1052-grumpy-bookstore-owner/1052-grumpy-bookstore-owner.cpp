class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int base = 0;

        for(int i=0; i<n; i++){
            if(grumpy[i] == 0){
                base += customers[i];
            }
        }
        int r =0;
        int l =0;
        int ans =0;
        int extra =0;

        while(r<n){
            if(grumpy[r]==1){
                extra += customers[r];
            }

            if(r-l+1 > minutes){
                if(grumpy[l]==1){
                    extra -= customers[l];
                }
                l++;
            }

            ans = max(ans, extra);
            r++;
        }

        return base+ans;        
    }
};