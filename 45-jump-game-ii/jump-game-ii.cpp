class Solution {
public:
    int canjump(vector<int>&nums,vector<int>&dp,int i){
        if(i>=nums.size()-1) return 0;
        if(dp[i]!=-1) return dp[i];
        int mini=1e9;
        for(int j=1;j<=nums[i];j++){
            int jumps=canjump(nums,dp,i+j);
            if(jumps!=1e9){ 
                mini=min(mini,1+jumps);
            }
        }
        return dp[i]=mini;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return canjump(nums,dp,0);
    }
};