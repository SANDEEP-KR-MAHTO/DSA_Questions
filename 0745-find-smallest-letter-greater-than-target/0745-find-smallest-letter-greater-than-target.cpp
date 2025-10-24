class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        long low = 0;
        long high = letters.size()-1;
        

        while(low<=high){
            long mid = low + (high-low)/2;

            if (letters[mid] == target){
                low = mid+1;
                
            }
            else if(letters[mid] < target){
                low = mid+1;
                
            }
            else{
                high = mid-1;
                
            }
        }
        if(low >= letters.size()){
            return letters[0];

        }
        else{
            return letters[low];
        }
        
    }
};