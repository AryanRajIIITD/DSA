class Solution {
public:
    int sum(vector<int>&nums,int sums){
        int split=1;
        long long totalsum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+totalsum<=sums){
                
                totalsum+=nums[i];

            } else {
                split++;
                totalsum=nums[i];
            }
        }
        return split;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h=0,a=0;
        for(auto i:nums){
            h+=i;
        }
        while(l<=h){
            int mid=(l+h)/2;
            int ans=sum(nums,mid);
            if(ans>k){
                
                l=mid+1;
            } else {
                h=mid-1;
            }
        }
        return l;
    }
};
