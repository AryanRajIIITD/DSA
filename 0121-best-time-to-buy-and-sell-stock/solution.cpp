class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        vector<int> next(3, 0);
        vector<int> curr(3, 0);

       for (int i = n - 1; i >= 0; i--) {
            for (int k = 1; k <= 2; k++) {
                if (k == 2) {
                    curr[k] = max(-nums[i] + next[1],  0 + next[2]);
                } else if (k == 1) {
                    curr[k] = max(nums[i] + next[0], 0 + next[1]);
                }
            }
            next=curr;
        }
        return next[2];
    }
};
