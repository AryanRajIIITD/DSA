class Solution {
public:
    void p(vector<int>&c,int n,int i,vector<int>&d,vector<vector<int>>&r,int sum,int t){
        if(i==n){
            if(sum==t){
                r.push_back(d);
            }
            return;
        }
        p(c,n,i+1,d,r,sum,t);
        if(sum+c[i]<=t){
            d.push_back(c[i]);
            sum+=c[i];
            p(c,n,i,d,r,sum,t);
            d.pop_back();
            sum-=c[i];
            
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int i=0;
        int sum=0;
        vector<int> d;
        vector<vector<int>> r;
        p(candidates,n,i,d,r,sum,target);
        return r;
    }
};
