class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r = height.size()-1;
        int area=0;
        while (l <r){
            int current_area = (r-l) * min(height[l], height[r]);
            area = max(current_area, area);
            if (height[l] <= height[r]){
                l += 1;
            }
            else if(height[l] > height[r]){
                r -= 1;
            }
        }
        return area;
        
    }
};