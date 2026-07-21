class Solution {
public:
    void p(vector<int>&nums,int i,int n,vector<vector<int>>&r){
        if(i==n){
            r.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
           
            swap(nums[j],nums[i]);
            p(nums,i+1,n,r);
            swap(nums[i],nums[j]);
            
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        
        vector<vector<int>> r;
        p(nums,i,n,r);
        return r;
    }
};
