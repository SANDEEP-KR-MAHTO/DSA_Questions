class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int count = 0;
        vector<bool> used(n, false);

        for(int i=0; i<n; i++){
            bool placed = false;
            for(int j =0; j<n; j++){
                if(fruits[i]<=baskets[j] && used[j]==false){
                    used[j] = true;
                    placed = true;
                    break;
                }
            }
            if(placed!=true){
                count++;
            }
        }
        return count;
        
    }
};