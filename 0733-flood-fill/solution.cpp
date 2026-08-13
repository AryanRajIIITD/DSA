class Solution {
public:
    int drow[4]={-1,0,0,1};
    int dcol[4]={0,-1,1,0};
    void dfs(vector<vector<int>>&g,vector<vector<int>>& image, int sr, int sc, int color,int ini){
        g[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nr=sr+drow[i];
            int nc=sc+dcol[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==ini && g[nr][nc]!=color  ){
                dfs(g,image,nr,nc,color,ini);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int ini=image[sr][sc];
        vector<vector<int>> g=image;
        dfs(g,image,sr,sc,color,ini);
        return g;
    }
};
