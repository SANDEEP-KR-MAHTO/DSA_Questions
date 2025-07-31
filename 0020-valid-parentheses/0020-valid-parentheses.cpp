class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        int flag =0;
        for (char c: str){
            if (c=='(' || c== '{' || c=='['){
                s.push(c);
            }
            else{
                if(s.empty()){
                    return false;
                    break;
                }
                char ch = s.top();
                s.pop();
                if((c==')' && ch=='(') || (c=='}' && ch=='{')|| (c==']' && ch== '[')){
                    continue;
                }
                else{
                    return false;
                    break;
                }
            }
        }
        return s.empty();
        
    }    
    
};