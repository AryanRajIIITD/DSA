class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        queue<pair<pair<int,int>,int>> q;
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int drow[4]={1,0,0,-1};
        int dcol[4]={0,1,-1,0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int tm=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=row+drow[i];
                int nc=col+dcol[i];
                if(nr<n && nr>=0 && nc<m && nc>=0 && mat[nr][nc]==1 && !vis[nr][nc]){
                    q.push({{nr,nc},t+1});
                    vis[nr][nc]=1;
                    mat[nr][nc]=t+1;
                }
            }
        }
        return mat;
    }
};
