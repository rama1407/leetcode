class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
        vector<vector<int>> mp(n);
        for(int i = 0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visited(n,-1);
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(node==destination) return true;
            for(auto it: mp[node]){
                    if(visited[it]==-1) {
                        q.push(it);
                        visited[it]=1;
                    }
                }
        }
        return false;
    }
}; 