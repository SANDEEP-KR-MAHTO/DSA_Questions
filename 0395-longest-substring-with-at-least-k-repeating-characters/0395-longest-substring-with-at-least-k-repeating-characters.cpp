class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        unordered_map<char, int> mp;
        
        
        for(auto c:s){
            mp[c]++;
        }

        for(int i =0; i<n; i++){
            if(mp[s[i]]<k){
                int left = longestSubstring(s.substr(0,i), k);
                int right = longestSubstring(s.substr(i+1), k);

                return max(left, right);
            }
        }
        return s.size();
        
    }
};