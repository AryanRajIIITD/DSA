class Solution {
public:
    void p(vector<int> c,int n, int i, int sum,vector<int>&d,vector<vector<int>>&r,int t){
        if(i==n){
            if(sum==t){
                r.push_back(d);
            }
            return;
        }
        p(c,n,i+1,sum,d,r,t);
        if(sum+c[i]<=t){
            d.push_back(c[i]);
            sum+=c[i];
            p(c,n,i,sum,d,r,t);
            d.pop_back();
            sum-=c[i];
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int i=0,sum=0;
        vector<int> d;
        vector<vector<int>> r;
        p(candidates,n,i,sum,d,r,target);
        return r;
        
    }
};
