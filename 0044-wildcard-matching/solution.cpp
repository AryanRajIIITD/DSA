class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<bool> curr (m+1,false);
        vector<bool> prev (m+1,false);
        prev[m]=true;
        for(int j=m-1;j>=0;j--){
            prev[j]=(p[j] == '*') && prev[j + 1];;
        }
        for(int i=n-1;i>=0;i--){
            curr[m]=false;
            for(int j=m-1;j>=0;j--){
                if(s[i]==p[j] || p[j]=='?'){
                    curr[j]=prev[j+1];
                } else if (p[j]=='*'){
                    curr[j]=prev[j] || curr[j+1];
                } else {
                    curr[j]=false;
                }
            }
            prev=curr;
        }
        return prev[0];
    }
};
