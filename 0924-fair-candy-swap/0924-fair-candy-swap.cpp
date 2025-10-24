class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);

        int diff = (sumA - sumB)/2;

        unordered_set<int> setB(bobSizes.begin(), bobSizes.end());

        for (auto x : aliceSizes){
            int y = x - diff;

            if (setB.count(y)){
                return {x,y};
            }
            
        }
        return {};
        
    }
};