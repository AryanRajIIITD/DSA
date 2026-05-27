class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0){
            return{-1,-1};

        }
        int l=0,h=n-1,first=-1,last=-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                first=mid;
                h=mid-1;
            } else if(nums[mid]>target) {
                h=mid-1;
            } else {
                l=mid+1;
            }
        }

        if(first==-1 ){
            return{-1,-1};
        }
         l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                last=mid;
                l=mid+1;
            } else if(nums[mid]>target) {
                h=mid-1;
            } else {
                l=mid+1;
            }
        }
        return {first,last};
    }
};
