class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int t) {
        int i=0;
        int n=arr.size();
        int sum=0;
        for(int i=0;i<=n-1;i++){
            sum+=arr[i];
        }
        if(abs(t)>sum || (t+sum)%2!=0) return false;
        int k=(t+sum)/2;
        vector<vector<int>> dp(n+1,vector<int>(k+1,0));
        dp[n][0]=1;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=k;j++){
                if(j<arr[i]){
                    dp[i][j]=dp[i+1][j];
                } else {
                    dp[i][j]=dp[i+1][j-arr[i]] + dp[i+1][j];
                }
            }
        }
        return dp[0][k];
    }
};
