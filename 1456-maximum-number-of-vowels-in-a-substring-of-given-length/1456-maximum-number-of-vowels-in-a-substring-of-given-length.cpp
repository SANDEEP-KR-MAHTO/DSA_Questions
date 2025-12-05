class Solution {
public:

    bool vowel(char c){
        if (c=='a' || c=='e' || c == 'i' || c=='o' || c=='u'){
            return true;
        }
        else{
            return false;
        }
    }

    int maxVowels(string s, int k) {

        int r=0;
        int l=0;
        int countVowels=0;
        int ans =0;

        while(r<s.size()){

            if(vowel(s[r])){
                countVowels++;
            }
            if(r-l+1>k){
                if(vowel(s[l])){
                    countVowels--;
                }
                l++;
            }

            ans = max(countVowels, ans);

            r++;
        }
        return ans;
        
    }
};