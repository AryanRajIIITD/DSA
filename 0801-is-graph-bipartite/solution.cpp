class Solution {
public:
     bool dfs(int node,int col,vector<vector<int>>&graph,vector<int>&color){

        color[node]=col;
        for(auto ne:graph[node]){
            if(color[ne]==-1){
                if(dfs(ne,!col,graph,color)==false) return false;
            } else if(color[ne]==color[node]) {
                return false;
            }
        }
        return true;
    }
        

    
    bool check(int start,vector<vector<int>>&graph,vector<int>&color){
        queue<int> q;
        q.push(start);
        color[start]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto ne:graph[node]){
                if(color[ne]==-1){
                    q.push(ne);
                    color[ne]=!color[node];
                } else if(color[ne]==color[node]) {
                    return false;
                }
            }
        }
        return true;

    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(dfs(i,0,graph,color)==false) return false;
            }
        }
        return true;
    }
};
