class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int a=0;
        int n=strs.size();
        for(int i=0;i<strs[0].size();i++){
            if(strs[0][i]!=strs[n-1][i]) break;
            a++;
        }
        if(a==0) return "";
        return strs[0].substr(0,a);
    }
};
