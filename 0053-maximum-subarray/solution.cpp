class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int csum=0, msum=nums[0];
        for(int i=0;i<n;i++){
            csum=max(csum,0);
            csum+=nums[i];
            msum=max(csum,msum);
            
            
        }
        return msum;
    }

};
