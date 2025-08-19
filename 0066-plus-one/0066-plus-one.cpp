class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        digits[n-1]++;

        for(int i = n-1; i>0; i--){
            if(digits[i] > 9){
                digits[i] = 0;
                digits[i-1]++;
            }
        }
        if(digits[0]>9){
            digits[0] = 0;
            digits.insert(digits.begin(),1) ;
        }
        return digits;

    }
};