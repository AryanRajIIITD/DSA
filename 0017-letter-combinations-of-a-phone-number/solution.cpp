class Solution {
public:
    unordered_map<char,string> f;
    void p(string&di,int i,int n,string& s,vector<string>& r){
        if(i==n){
            r.push_back(s);
            return;
        }
        string c=f[di[i]];
        for(int j=0;j<c.size();j++){
            s.push_back(c[j]);
            p(di,i+1,n,s,r);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        f['2']="abc";
        f['3']="def";
        f['4']="ghi";
        f['5']="jkl";
        f['6']="mno";
        f['7']="pqrs";
        f['8']="tuv";
        f['9']="wxyz";
        int i=0;
        int n=digits.size();
        string s="";
        vector<string> r;
        p(digits,i,n,s,r);
        return r;
    }
};
