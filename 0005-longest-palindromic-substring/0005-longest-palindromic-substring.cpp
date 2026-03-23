class Solution {
public:
    bool ispal(string &s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxcount = 0;
        int start = 0;
        int n = s.size();
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
               if(ispal(s,i,j)){
                  if(j-i+1>maxcount){
                     maxcount = j-i+1;
                     start = i;
                  }
               }
            }
        }
        return s.substr(start,maxcount);
    }
};