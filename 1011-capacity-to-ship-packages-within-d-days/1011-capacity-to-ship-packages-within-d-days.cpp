class Solution {
public:
    
    bool canShip(vector<int>& weights, int D, int capacity){
        int load = 0;
        int days=1;
        for(auto w: weights){
            if(load+w > capacity){
                days++;
                load=0;
            }
            load += w;
        }
        return days<=D;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {

       int low = *max_element(weights.begin(), weights.end());
       int high = accumulate(weights.begin(), weights.end(),0);

       while(low<high){
        int mid = low + (high-low)/2;

        if(canShip(weights, days, mid)){
            high = mid;
        }
        else{
            low = mid+1;
        }
       }
       return low;

        
    }
};