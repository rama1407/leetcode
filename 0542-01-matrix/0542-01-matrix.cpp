class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(!visited[i][j] && mat[i][j]==0){
                    q.push({i,j});
                    visited[i][j] = 1;
                }
            }
        }
        int dx[] = {-1,0,0,1};
        int dy[] = {0,-1,1,0};
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int i = 0;i<4;i++){
                int x = a + dx[i];
                int y = b + dy[i];
                if(x>=0 && x<n && y>=0 && y<m && !visited[x][y]){
                       mat[x][y] += mat[a][b];
                       visited[x][y] = 1;
                       q.push({x,y});
                }
            }
        }
        return mat;
    }
};