class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int a=0,ans=0;
        int mini=*max_element(nums.begin(),nums.end());
        for(auto i:nums){
            a+=i;
        }
        int h=a,l=mini;
        while(l<=h){
            int mid=(l+h)/2;
            int b=0,d=1;
            for(int i=0;i<nums.size();i++){
                
                if(b+nums[i]>mid){
                    d++;
                    b=0;
                }
                b+=nums[i];

            }
            
            if(d<=days){
                ans=mid;
                h=mid-1;
            } else {
                l=mid+1;
            }

        }
        return ans;
    }
};
