class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        queue<pair<int,int>> q;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int dx[] = {-1,0,0,1};
        int dy[] = {0,-1,1,0};
        while(!q.empty()){
            int r = q.size();
            bool found = false;
            for(int i = 0;i<r;i++){
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                for(int k = 0;k<4;k++){
                    int x = dx[k] + a;
                    int y = dy[k] + b;
                    if(x>=0 && x<n && y>=0 && y<m){
                        if( grid[x][y]==1) {
                            grid[x][y] = 2;
                            q.push({x,y});
                            found = true;
                        }
                    }
                }
            }
            if(found) count++;
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return count;
    }
};