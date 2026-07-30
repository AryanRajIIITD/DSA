class Solution {
public:
    int p(vector<int>&pr,int n,int i,int k,vector<vector<int>>&dp){
        if(i==n) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        if(k==0){
            return dp[i][k]= p(pr,n,i+1,2,dp);
        } else if(k==2){ 
            return dp[i][k]=max(p(pr,n,i+1,k-1,dp)-pr[i],p(pr,n,i+1,k,dp));
        } else {
            return dp[i][k]=max(p(pr,n,i+1,0,dp)+pr[i],p(pr,n,i+1,k,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(3,-1));
        return p(prices,n,0,2,dp);
    }
};
