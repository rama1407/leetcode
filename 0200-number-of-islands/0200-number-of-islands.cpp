class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& visited,int n,int m){
        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j]=1;
        int dx[] = {-1,0,0,1};
        int dy[] = {0,-1,1,0};
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int k = 0;k<4;k++){
                int x = a+dx[k];
                int y = b+ dy[k];
                if(x>=0 && x<n && y >=0 && y<m)
                {
                    if(!visited[x][y] && grid[x][y]=='1') {
                        q.push({x,y});
                        visited[x][y] = 1;
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]) {
                    bfs(i,j,grid,visited,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};