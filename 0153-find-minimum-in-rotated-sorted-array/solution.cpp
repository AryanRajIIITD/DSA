class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        
        int l=0,h=n-1,mi=nums[n-1];
        while(l<=h){
            int mid=(l+h)/2;
            mi=min(mi,nums[mid]);
            if(nums[mid]>=nums[h]){
                l=mid+1;
            } else {
                h=mid-1;
            }
        }
        return mi;
    }
};
