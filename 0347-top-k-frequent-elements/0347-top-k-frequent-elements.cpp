class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int x: nums) mp[x]++;
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](const auto& a, const auto& b){
              return a.second<b.second;
        });
        int n = vec.size();
        int j = n-1;
        while(k>0){
            ans.push_back(vec[j].first);
            k--;
            j--;
        }
        return ans;
    }
};