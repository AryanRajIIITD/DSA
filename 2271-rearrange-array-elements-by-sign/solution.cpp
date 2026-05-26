class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> arr(n);
        int l=0,r=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                arr[l]=nums[i];
                l+=2;
            } else {
                arr[r]=nums[i];
                r+=2;
            }
        }
        return arr;
    }
};
