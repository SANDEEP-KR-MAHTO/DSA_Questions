class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int upperCount = 0;

        for(auto c: word){
            if(isupper(c)){
                upperCount++;
            }
        }
        if(upperCount == n){
            return true;
        }
        if(upperCount == 0){
            return true;
        }
        if(upperCount == 1 && isupper(word[0])){
            return true;
        }
        else{
            return false;
        }
    }
};