class Solution {
public:
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& visited,
             int i, int j, int n, int m, int& count) {

        stack<pair<int, int>> st;
        st.push({i, j});
        visited[i][j] = 1;

        int dx[] = {-1, 0, 0, 1};
        int dy[] = {0, -1, 1, 0};

        while (!st.empty()) {
            int a = st.top().first;
            int b = st.top().second;
            st.pop();

            for (int k = 0; k < 4; k++) {
                int x = a + dx[k];
                int y = b + dy[k];

                if (x < 0 || y < 0 || x >= n || y >= m ||
                    grid[x][y] == 0) {
                    count++;
                }
                else if (!visited[x][y] && grid[x][y] == 1) {
                    visited[x][y] = 1;
                    st.push({x, y});
                }
            }
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] == 1) {
                    dfs(grid, visited, i, j, n, m, count);
                    return count;
                }
            }
        }

        return 0;
    }
};