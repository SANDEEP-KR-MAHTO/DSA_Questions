class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        if(n==1){
            return true;
        }

        while(n!=1 && seen.count(n)==0){
            seen.insert(n);
            string m = to_string(n);
            int sum = 0;
            for(int i =0; i<m.size(); i++){
                int a = m[i]-'0';
                sum = sum + a * a;
            }
            n = sum;
            if(n==1){
                return true;
            }
        }
        return false;
        
        
    }
};