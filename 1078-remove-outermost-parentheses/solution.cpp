class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int o=0;
        string cp;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                o++;
                if(o>1){
                    cp+=s[i];
                }
            } else {
                o--;
                if(o>0){
                    cp+=s[i];
                }
            }
        
        }
        return cp;
    }
};
