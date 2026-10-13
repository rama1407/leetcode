class Solution {
public:
    void dfs(vector<vector<int>> &adj,vector<int> &visited,int node){
        stack<int> st;
        st.push(node);
        visited[node] = 1;
        while(!st.empty()){
             int x = st.top();
             st.pop();
             for(auto it: adj[x]){
                if(!visited[it]){
                    st.push(it);
                    visited[it] = 1;
                }
             }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        int count = 0;
        vector<int> visited(n,0);
        for(int i = 0;i<n;i++){
            if(!visited[i]) {
                 count++;
                  dfs(adj,visited,i);
            }
        }
        return count;
    }
};