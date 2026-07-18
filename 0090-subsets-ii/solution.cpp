class Solution {
public:
    void p(vector<int>&nums,int i ,int n,vector<int>&d, vector<vector<int>>&r){
        if(i==n){
            r.push_back(d);
            return;
        }
        d.push_back(nums[i]);
        p(nums,i+1,n,d,r);
        d.pop_back();
        
        while(i+1<n && nums[i]==nums[i+1]){
            i++;
        }
        p(nums,i+1,n,d,r);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int> d;
        vector<vector<int>> r;
        sort(nums.begin(), nums.end());
        p(nums,i,n,d,r);
        return r;
    }
};
