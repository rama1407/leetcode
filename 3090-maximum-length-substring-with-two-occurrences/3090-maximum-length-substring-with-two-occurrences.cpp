class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxlength = 0;
        int l = 0;
        int r = 0;
        unordered_map<char,int> mp;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            maxlength =  max(maxlength,r-l+1);
            r++;
        }
        return maxlength;
    }
};