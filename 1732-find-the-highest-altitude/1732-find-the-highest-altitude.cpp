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
        sort(altitude.begin(),altitude.end());
        return altitude.back();
    }
};