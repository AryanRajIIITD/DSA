class Solution {
public:
    void dfs(vector<vector<int>>&adj,int node,vector<bool>&vis){
        vis[node]=1;
        for(int i=0;i<adj.size();i++){
            if(adj[node][i]==1 &&!vis[i]){
                dfs(adj,i,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<bool> vis(V,0);
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(isConnected,i,vis);
                
            }
        }
        return count;
    }
};
