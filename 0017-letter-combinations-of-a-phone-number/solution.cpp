class Solution {
public:
    unordered_map<char,string> f;
       
    void p(string digits,int i,int n,string&d,vector<string>&r){
        if(i==n){
            r.push_back(d);
            return;
        }
        string c=f[digits[i]];
        for(int j=0;j<c.size();j++){
            d.push_back(c[j]);
            p(digits,i+1,n,d,r);
            d.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        f['2']="abc";
        f['3']="def";
        f['4']="ghi";
        f['5']="jkl";
        f['6']="mno";
        f['7']="pqrs";
        f['8']="tuv";
        f['9']="wxyz"; 
        string d="";
        vector<string> r;
        p(digits,0,n,d,r);
        return r;
    }
};
