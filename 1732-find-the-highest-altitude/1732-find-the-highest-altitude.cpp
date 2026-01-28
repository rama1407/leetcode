class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitude;
        altitude.push_back(0);
        for(int i = 0;i<n;i++)
        {
             altitude.emplace_back(altitude[i]+gain[i]);
        }
        return *max_element(altitude.begin(),altitude.end());
    }
};