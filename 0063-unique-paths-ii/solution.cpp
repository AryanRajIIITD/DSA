class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<long long> dp(m, 0);
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                if (obstacleGrid[i][j] == 1) {
                    dp[j] = 0;
                } 
                else if (i == n - 1 && j == m - 1) {
                    dp[j] = 1;
                } 
                else {
                    long long right = (j + 1 < m) ? dp[j + 1] : 0;
                    long long down = dp[j];
                    dp[j] = down + right;
                }
            }
        }
        return dp[0];
    }
};
