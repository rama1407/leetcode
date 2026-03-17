class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int maxcount = 0;
        int n = s.size();
        int hash[256];
        for(int i = 0;i<256;i++) hash[i] = -1;
        while(r<n){
             if(hash[s[r]]!=-1){
                l = max(l, hash[s[r]] + 1);
             }
             maxcount = max(maxcount,r-l+1);
             hash[s[r]] = r;
             r++;
        }
        return maxcount;
    }
};