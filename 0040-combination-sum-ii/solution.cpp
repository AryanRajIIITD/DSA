class Solution {
public:
    void p(vector<int> c,int n, int i, int sum,vector<int>&d,vector<vector<int>>&r,int t){
        if(sum == t){
            r.push_back(d);
            return;
        }
        if(i == n || sum > t){
            return;
        }
        d.push_back(c[i]);
        p(c, n, i + 1, sum + c[i],d,r, t);
        d.pop_back();
        while(i + 1 < n && c[i] == c[i + 1]) {
            i++; 
        }
        p(c, n, i + 1,sum, d, r, t);
    
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int i=0;
        int n=candidates.size();
        int sum=0;
        vector<int> d;
        vector<vector<int>> r;
        sort(candidates.begin(),candidates.end());
        p(candidates,n,i,sum,d,r,target);
        return r;
    }
};
