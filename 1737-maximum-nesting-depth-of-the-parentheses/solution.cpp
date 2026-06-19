class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maxi=0,o=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='('){
                o++;
                maxi=max(maxi,o);
            }
            if(s[i]==')'){
                 o--;
            }
            
        }
        return maxi;
    }
};
