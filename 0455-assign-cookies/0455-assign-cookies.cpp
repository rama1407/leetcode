class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int x = g.size();
        int y = s.size();
        int count = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0;
        int j = 0;
        while(i<x && j<y){
            if(s[j]>=g[i]){
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count;
    }
};