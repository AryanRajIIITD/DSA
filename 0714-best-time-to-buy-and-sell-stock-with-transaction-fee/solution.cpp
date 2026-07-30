class Solution {
public:
    int p(vector<int>& pr,int n,int i,int k,int fee,vector<vector<int>>&dp){
        if(i==n) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        if(k==2){
            return dp[i][k]=max(p(pr,n,i+1,k-1,fee,dp)-pr[i]-fee,p(pr,n,i+1,k,fee,dp));
        } else {
            return dp[i][k]=max(p(pr,n,i+1,2,fee,dp)+pr[i],p(pr,n,i+1,k,fee,dp));
        }
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2+1,-1));
        return p(prices,n,0,2,fee,dp);
    }
};
