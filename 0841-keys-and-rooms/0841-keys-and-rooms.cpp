class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n,0);
        stack<int> st;
        st.push(0);
        visited[0] = 1;
        while(!st.empty()){
          int node = st.top();
                st.pop();
                int y = rooms[node].size();
                for(int k = 0;k<y;k++){
                    int val = rooms[node][k];
                    if(!visited[val]){
                        st.push(val);
                        visited[val] = 1;
                    }
                }
        }
        for(int it:visited) {
            if(it==0) return false;
        }
        return true;
    }
};