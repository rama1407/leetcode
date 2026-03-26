class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         int n = strs.size();
         unordered_map<string,vector<string>> a;
         for(string s:strs){
            int freq[26] = {0};
            for(char c: s){
                freq[c-'a']++;
            }
            string key = "";
            for(int i =0;i<26;i++){
                key+=to_string(freq[i])+"#";
            }
            a[key].push_back(s);
         }
         vector<vector<string>> b;
         for(auto i:a){
            b.push_back(i.second);
         }
         return b;
    }
};