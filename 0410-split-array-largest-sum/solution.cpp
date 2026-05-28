class Solution {
public:
    int can(vector<int>& nums,int sum){
        int splits=1;
        long long totalsum=0;
        for(int i=0;i<nums.size();i++){
            if(totalsum+nums[i]<=sum){
                
                totalsum+=nums[i];
            } else {
                splits++;
                totalsum=nums[i];
            }
        }
        return splits;
    }
    
    
    
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        if(k>n) return -1;
        int l=maxi;
        int h=0;
        for(auto i:nums){
            h+=i;
        }
        while(l<=h){
            int mid=(l+h)/2;
            int a=can(nums,mid);
            if(a>k){
                l=mid+1;
            } else {
                h=mid-1;
            }

        }
        return l;
    }
};
