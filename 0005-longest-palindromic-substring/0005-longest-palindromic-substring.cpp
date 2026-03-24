class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlen = 0;
        int start = 0;
        for(int i = 0;i<n;i++){
            int l = i;
            int r = i;
            while(l>=0&&r<n&&s[l]==s[r]){
                if(r-l+1>maxlen){
                    maxlen = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }
            int l1 = i;
            int r1 = i+1;
            while(l1>=0&&r1<n&&s[l1]==s[r1]){
                if(r1-l1+1>maxlen){
                    maxlen = r1-l1+1;
                    start = l1;
                }
                l1--;
                r1++;
            }
        }
      return s.substr(start,maxlen);
    }
};