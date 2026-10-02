class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n = image.size();
        int m = image[0].size();

        int originalColor = image[sr][sc];

        if(originalColor == color)
            return image;

        vector<vector<int>> visited(n, vector<int>(m, -1));

        queue<pair<int,int>> q;

        q.push({sr, sc});
        visited[sr][sc] = 1;
        image[sr][sc] = color;

        while(!q.empty()) {

            pair<int,int> node = q.front();
            q.pop();

            int l = node.first;
            int r = node.second;

            // UP
            if(l > 0 &&
               visited[l-1][r] == -1 &&
               image[l-1][r] == originalColor) {

                visited[l-1][r] = 1;
                image[l-1][r] = color;
                q.push({l-1, r});
            }

            // DOWN
            if(l < n-1 &&
               visited[l+1][r] == -1 &&
               image[l+1][r] == originalColor) {

                visited[l+1][r] = 1;
                image[l+1][r] = color;
                q.push({l+1, r});
            }

            // LEFT
            if(r > 0 &&
               visited[l][r-1] == -1 &&
               image[l][r-1] == originalColor) {

                visited[l][r-1] = 1;
                image[l][r-1] = color;
                q.push({l, r-1});
            }

            // RIGHT
            if(r < m-1 &&
               visited[l][r+1] == -1 &&
               image[l][r+1] == originalColor) {

                visited[l][r+1] = 1;
                image[l][r+1] = color;
                q.push({l, r+1});
            }
        }

        return image;
    }
};