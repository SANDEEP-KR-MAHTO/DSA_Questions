class Solution {
public:
    bool isPalindrome(int x) {
            if(x<0){
                return false;
            }
            else{
                int total=0;
                int dup = x;
                while(x>0){
                    int r = x%10;
                    if((total < INT_MIN/10) || (total > INT_MAX/10)){
                        return false;
                    }
                    total = total * 10 + r;
                    x = x/10;
                }
                if(dup==total){
                    return true;
                }
                else{
                    return false;
                }
                
            }
        }
};