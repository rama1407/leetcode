class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxlength = 0;
        int l = 0;
        int r = 0;
        int count[256] = {0};
        while(r<n){
            count[s[r]]++;
            while(count[s[r]]>2){
                count[s[l]]--;
                l++;
            }
            maxlength =  max(maxlength,r-l+1);
            r++;
        }
        return maxlength;
    }
};