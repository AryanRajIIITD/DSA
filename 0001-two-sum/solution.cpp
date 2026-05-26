#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> a;
        for(int i=0;i<n;i++){
            int c=target-nums[i];
            if(a.find(c)!=a.end()){
                return{a[c],i};
            }
            a[nums[i]]=i;
        }

        
        
        return{};
    }
    
};
