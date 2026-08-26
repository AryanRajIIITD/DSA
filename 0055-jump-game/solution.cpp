class Solution {
public:
    bool canjump(vector<int>&nums,int i,vector<int>&dp){
        if(i>=nums.size()-1) return true;
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j<=nums[i];j++){
            if( canjump(nums,i+j,dp)){ 
                return dp[i]=1;
            }
        }
        return dp[i]= 0;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return canjump(nums,0,dp);
    }
};
