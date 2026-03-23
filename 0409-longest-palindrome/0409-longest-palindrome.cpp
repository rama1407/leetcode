class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int hash[256] = {0};
        for(int i = 0;i<n;i++)  hash[s[i]]++;
        int length = 0;
        bool odd = false;
        for(int i = 0;i<256;i++){
            if(hash[i]%2==0) {
                length = length+hash[i];
            }
            else 
              {
                length = hash[i]-1+length;
                odd = true;
              }
        }
        if(odd) return length+1;
        return length;
    }
};