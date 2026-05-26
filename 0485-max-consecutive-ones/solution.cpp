class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cursum=0,maxsum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cursum++;
            } else {
                maxsum=max(cursum,maxsum);
                cursum=0;
            }
        }
        
        return max(cursum,maxsum);
    }
};
