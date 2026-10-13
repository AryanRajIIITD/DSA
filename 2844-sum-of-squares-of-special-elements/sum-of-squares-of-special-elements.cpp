class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        if(n==0) return sum;
        for(int i=1;i<n+1;i++){
            if(n%i==0) sum+=nums[i-1]*nums[i-1];
        }
        return sum;
    }
};