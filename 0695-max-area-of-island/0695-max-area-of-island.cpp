class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& visited,int i,int j,int n,int m,int &maxcount){
        stack<pair<int,int>> st;
        st.push({i,j});
        int count = 1;
        int dx[] = {-1,0,0,1};
        int dy[] = {0,-1,1,0};
        visited[i][j] = 1;
        while(!st.empty()){
            int a = st.top().first;
            int b = st.top().second;
            st.pop();
            for(int k = 0;k<4;k++){
                int x = a + dx[k];
                int y = b + dy[k];
                if(x>=0 && x<n && y>=0 && y<m){
                      if(!visited[x][y] && grid[x][y] == 1) {
                          st.push({x,y});
                          visited[x][y] = 1;
                          count++;
                      }
                }
            }
        }
        maxcount = max(maxcount,count);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxcount = 0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    dfs(grid,visited,i,j,n,m,maxcount);
                }
            }
        }
        return maxcount;
    }
};