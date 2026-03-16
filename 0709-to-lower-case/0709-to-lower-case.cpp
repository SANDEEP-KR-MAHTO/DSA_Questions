class Solution {
public:
    string toLowerCase(string s) {
        string b = "";
        for(auto c:s){
            c = tolower(c);
            b += c;
        }
        
        return b;
    }
};