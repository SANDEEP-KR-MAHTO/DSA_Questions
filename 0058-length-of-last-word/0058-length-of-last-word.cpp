class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = s.size()-1;
        int len=0;
        while(i>=0){
            if (s[i]!=' '){
                i--;
            }
            else{
                if(i==n-1){
                    i--;
                    n=n-1;
                }
                else{
                    break;
                }
            }

        }
        return n-i-1;
        
    }
};