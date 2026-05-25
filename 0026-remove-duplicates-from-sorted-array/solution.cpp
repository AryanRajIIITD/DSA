class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1,i=0;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                j++;
                swap(nums[j-1], nums[i+1]);
                i++;
            } else{
                j++;
            }
        }
        return (i+1);
    }
};
