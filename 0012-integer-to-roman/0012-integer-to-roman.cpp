class Solution {
public:
    string intToRoman(int num) {
        vector<int> value = {
            1000, 900, 500, 400,
            100, 90, 50, 40, 10,
            9, 5, 4, 1
        };

        vector<string> symbol = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL", "X",
            "IX", "V", "IV", "I"
        };
        int i =0;
        string result = "";
        while(num>0){
            while(num>=value[i]){
                result += symbol[i];
                num -= value[i];
            }
            i++;
        }

        return result;
        
    }
};