class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int>prev(n, 0);
        vector<int>curr(n, 0);


        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (i == m - 1 && j == n - 1) {
                    curr[j] = grid[i][j];
                } else {
                    int down = (i + 1 < m) ? prev[j] : 1e9;
                    int right = (j + 1 < n) ? curr[j + 1] : 1e9;
                    
                    curr[j] = grid[i][j] + min(down, right);
                }
            }
            prev=curr;
        }

        return prev[0];
    }
};
