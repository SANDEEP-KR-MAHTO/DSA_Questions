class Solution {
public:
    int char2num(char s) {
        switch (s){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }




    int romanToInt(string s) {
        
        int len = s.size();
        int sum =0;
        for (int i=0; i<len-1; i++){
            if (char2num(s[i])< char2num(s[i+1])) {
                sum -= char2num(s[i]);
            }

            else {
                sum += char2num(s[i]);
            }
            
        }
        return sum + char2num(s[len-1]);
        
    }
};