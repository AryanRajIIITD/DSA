class Solution {
public:
    int drow[4] = {-1, 1, 0, 0};
    int dcol[4] = {0, 0, -1, 1};
    void dfs(int r,int c,vector<vector<char>>&grid){
        grid[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
            for(int i=0;i<4;i++){ 
                int nr=r+drow[i];
                int nc=c+dcol[i];
                if(nr>=0 && nr<n && nc>=0  && nc<m && grid[nr][nc]=='1'){
                    dfs(nr,nc,grid);
                }
            
            }

        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( grid[i][j]=='1'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};
