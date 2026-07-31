class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<unsigned long long>curr(m+1,0);
        vector<unsigned long long>prev(m+1,0);
        curr[m]=1;
        prev[m]=1;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(s[i]==t[j]){
                    curr[j]=prev[j+1]+prev[j];
                } else {
                    curr[j]=prev[j];
                }
            }
            prev=curr;
        }
        return prev[0];
    }
};
