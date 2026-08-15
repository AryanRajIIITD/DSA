class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& p) {
        queue<int> q;
        vector<int> id(V);
        vector<int> topo;
        vector<int> adj[V];
        for(auto it:p){
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                id[it]++;
            }
        }
        for(int i=0;i<V;i++){
            if(id[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int  node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                id[it]--;
                if(id[it]==0) q.push(it);
            }
        }
        if(topo.size()==V) return topo;
        return {};
    }
    
};
