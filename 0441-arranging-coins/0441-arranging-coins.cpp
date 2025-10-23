class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        int count = 0;
        while(i<=n){
            count += 1;
            n=n-i;
            i++;
        }
        return count;
        
    }
};