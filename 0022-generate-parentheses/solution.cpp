class Solution {
public:
    void p(int o,int c,int n,string&d,vector<string>&r){
        if(o==n && c==n){
            r.push_back(d);
            return;
        }
        if(o!=n){
            d.push_back('(');
            p(o+1,c,n,d,r);
            d.pop_back();
        }
        if(c<o){
            d.push_back(')');
            p(o,c+1,n,d,r);
            d.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        int o=0,c=0;
        string d;
        vector<string> r;
        p(o,c,n,d,r);
        return r;
    }
};
