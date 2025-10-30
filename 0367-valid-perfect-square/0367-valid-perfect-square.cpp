class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0;
        int high = num;
        while(low<=high){
            long mid = low + (high-low)/2;

            long target = mid * mid;
            if(target < num){
                low = mid + 1;
            }
            else if (target == num){
                return true;
            }
            else{
                high = mid -1;
            }
        }
        return false;
        
    }
};