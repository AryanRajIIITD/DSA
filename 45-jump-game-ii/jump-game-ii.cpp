class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0;
        int count=0;
        while(r<nums.size()-1){ 
            int farthest=0;
            for(int j=l;j<=r;j++){
                farthest=max(farthest,j+nums[j]);
            }
            l=r+1;
            r=farthest;
            count+=1;
        }
        return count;
    }
};