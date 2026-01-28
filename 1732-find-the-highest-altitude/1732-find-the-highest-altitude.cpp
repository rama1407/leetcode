class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int maxalt = 0;
        for(int x : gain)
        {
            curr = curr + x;
            maxalt = max(curr,maxalt);
        }
        return maxalt;
    }
};