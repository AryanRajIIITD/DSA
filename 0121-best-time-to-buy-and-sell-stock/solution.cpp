class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0],maxp=0,p=0;
        for(int i=1;i<n;i++){
            mini=min(mini,nums[i]);
            p=nums[i]-mini;
            maxp=max(maxp,p);
        }
        return maxp;
    }
};
