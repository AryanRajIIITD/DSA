class Solution {
public:
    void p(vector<int>& c, int i, int n,vector<int>&d,vector<vector<int>>&r,int t){
        if(t==0){
            r.push_back(d);
            return;
        }
        if(i==n ||  t<0){
            return;
        }
        d.push_back(c[i]);
        p(c,i,n,d,r,t-c[i]);
        d.pop_back();
        p(c,i+1,n,d,r,t);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i=0;
        int n=candidates.size();
        vector<int> d;
        vector<vector<int>> r;
        p(candidates,i,n,d,r,target);
        return r;
    }
};
