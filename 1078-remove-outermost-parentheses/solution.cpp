class Solution {
public:
    string removeOuterParentheses(string s) {
        int opened=0;
        string st="";
        for(char c:s){
            if(c=='('){
                if(opened>0){
                    st+=c;
                }
                opened++;
            } else {
                opened--;
                if(opened>0){
                    st+=c;
                }
            }
            
        }
        return st;
    }
};
