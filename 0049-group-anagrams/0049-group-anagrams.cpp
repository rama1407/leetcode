class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         int n = strs.size();
         unordered_map<string,vector<string>> a;
         for(auto s:strs){
            string key = s;
            sort(key.begin(),key.end());
            a[key].push_back(s);
         }
         vector<vector<string>> b;
         for(auto it: a){
            b.push_back(it.second);
         }
         return b;
    }
};