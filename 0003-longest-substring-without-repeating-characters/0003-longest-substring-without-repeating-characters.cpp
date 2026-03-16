class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxcount = 0;
        int l = 0;
        unordered_set<char> a;
        for(int i =0;i<n;i++){
            while(a.count(s[i])) {
                a.erase(s[l]);
                l++;
            }
            a.insert(s[i]);
            maxcount = max(maxcount,i-l+1);
        }
        return maxcount;
    }
};