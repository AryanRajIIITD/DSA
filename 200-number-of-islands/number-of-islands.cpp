class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>&grid){
        //vis[row][col]=1;
        grid[row][col]=0;
        int n=grid.size();
        int m=grid[0].size();
        int drow[4]={1,0,0,-1};
        int dcol[4]={0,1,-1,0};
        for(int i=0;i<4;i++){
            int nr=row+drow[i];
            int nc=col+dcol[i];
            if(nc<m && nc>=0 && nr<n && nr>=0 && grid[nr][nc]=='1'){
                dfs(nr,nc,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
    
//        for(int i=0;i<n;i++){
  //          for(int j=0;j<m;j++){
    //            if(grid[i][j]=='1' && !vis[i][j]){ 
      //              dfs(i,j,grid,vis);
        //            cnt++;
          //      }
            //}
        //}
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){ 
                    dfs(i,j,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};