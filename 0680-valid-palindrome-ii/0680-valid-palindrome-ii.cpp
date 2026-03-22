class Solution {
public:
    bool pal(string s){
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                string s1 = s;
                string s2 = s;
                s1.erase(l,1);
                s2.erase(r,1);
                return pal(s1)||pal(s2);
            }
            l++;
            r--;
        }
        return true;
    }
};