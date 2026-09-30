class Solution {
public:
    bool dfs(int i,int parent,vector<vector<int>>&adj,vector<bool>&visited){
        visited[i] = true;
        for(int neighbour : adj[i]){
            if(!visited[neighbour]){
                if(dfs(neighbour,i,adj,visited)){
                    return true;
                }
            }else if(neighbour != parent){
                return true;
            }
        }
        return false;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size() != n-1){
            return false;
        }
        vector<vector<int>>adj(n);
        int count = 0;
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visited(n,false);
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                if(dfs(i,-1,adj,visited)){
                    return false;
                }
            }
        }
        return true;

    }
};
