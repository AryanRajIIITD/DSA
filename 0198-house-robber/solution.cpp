class Solution {
public:
    int p(vector<int>&nu,int i,int n,int f,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][f]!=-1){
            return dp[i][f];
        }
        if(f==0){
            return dp[i][f]=p(nu,i+1,n,1,dp);
        }
        int c1=nu[i]+p(nu,i+1,n,0,dp);
        int c2=p(nu,i+1,n,1,dp);
        return dp[i][f]=max(c1,c2);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<vector<int>> dp(n);
        for(int j=0;j<n;j++){
            vector<int>t(2,-1);
            dp[j]=t;
        }
        return p(nums,i,n,1,dp);
    }
};
