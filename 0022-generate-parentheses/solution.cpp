class Solution {
public:
    void p(int o, int c, int n, string& t,vector<string>&s)
    {
        if(o==n && c==n){
            s.push_back(t);
            return;
        }
        if(o<n){
            t.push_back('(');
            p(o+1,c,n,t,s);
            t.pop_back();
        }
        if(c<o){
            t.push_back(')');
            p(o,c+1,n,t,s);
            t.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        int o=0,c=0;
        vector<string> s;
        string tmp="";
        p(o,c,n,tmp,s);
        return s;
    }
};
