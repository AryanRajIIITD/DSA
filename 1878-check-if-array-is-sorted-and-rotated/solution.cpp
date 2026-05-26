class Solution {
public:
    bool check(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums.at(i)>nums.at(i+1)){    
                a++;
            }
        }
        if ((nums[0]<nums[nums.size()-1])&& a==1){
            a++;
        }
        if(a<=1){
            return true;
        } else {
            return false;
        }
    }
};
