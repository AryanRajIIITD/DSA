class Solution {
public:
   
    int smallestDivisor(vector<int>& nums, int t) {
        int maxi=*max_element(nums.begin(),nums.end());
        int d=1,h=maxi,ai=0;
        while(d<=h){
            int mid=(d+h)/2;
            int ans=0;
            for(auto i : nums){
                ans+=ceil((double)i/mid);
            }
            if(ans<=t){
                ai=mid;
                h=mid-1;

            } else {
                d=mid+1;
            }

        }
        return ai;
    }
};
