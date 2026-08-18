class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        if(grid[n-1][m-1]==1 || grid[0][0]) return -1;
        if(n==1 && m==1) return 1;
        vector<vector<int>>  dist(n,vector<int>(m,1e9));
        queue<pair<int,pair<int,int>>> q;
        dist[0][0]=1;
        q.push({1,{0,0}});
        while(!q.empty()){
            auto it = q.front();
            int row=it.second.first;
            int col=it.second.second;
            int dis=it.first;
            q.pop();
            if(row==n-1 && col==m-1) return dist[row][col];
            
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int nr=row+i;
                    int nc=col+j;
                    if(nc<m &&nc>=0 &&nr<n &&nr>=0 && grid[nr][nc]==0 && 1+dis<dist[nr][nc]){
                        dist[nr][nc]=1+dis;
                        
                        q.push({dis+1,{nr,nc}});
                    }
                }
            }

        }
        return -1;
    }
};
