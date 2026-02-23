class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>= s.size()){
            return s;
        }
        vector<string> vec(numRows);
        int row=0;
        bool flag=true;

        for(char c: s){
            vec[row].push_back(c);

            if(row==0){
                flag=true;
            }
            else if(row==numRows-1){
                flag=false;
            }

            if(flag){
                row++;
            }
            else{
                row--;
            }
        }
        string result;
        for(string&r : vec){
            result += r;
            }
        
        return result;
        
    }   
};