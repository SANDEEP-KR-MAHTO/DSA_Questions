class Solution {
public:
    int arrangeCoins(int n) {
        int low = 0;
        int high = n;
        while(low<=high){
            long mid = low + (high-low)/2;
            long coins = mid * (mid+1)/2;

            if (coins == n){
                return mid;
            }
            else if (coins < n){
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }  
        return high;      
    }
};