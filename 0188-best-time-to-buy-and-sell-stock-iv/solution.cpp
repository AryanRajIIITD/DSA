class Solution {
public:
    int p(vector<int>&nums,int n,int i,int k,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(k==0) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        if(k%2==0){
            return dp[i][k]= max(p(nums,n,i+1,k-1,dp)-nums[i],p(nums,n,i+1,k,dp));
        } else {
            return dp[i][k]=max(p(nums,n,i+1,k-1,dp)+nums[i],p(nums,n,i+1,k,dp));
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(k*2+1,-1));
        return p(prices,n,0,k*2,dp);
    }
};
