class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int i=0,sum=0;
        int n=nums.size();
        for(int i=0;i<=n-1;i++){
            sum+=nums[i];
        }
        int k=sum/2;
        if(sum%2!=0) return false; 
        vector<vector<bool>> dp(n+1,vector<bool>(k+1,false));
        dp[n][0]=true;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=k;j++){
                if(j<nums[i]){
                    dp[i][j]=dp[i+1][j];
                } else {
                    dp[i][j]=dp[i+1][j] ||dp[i+1][j-nums[i]];
                }
            }
        }
        return dp[0][k];
    }
};
