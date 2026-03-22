class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(char c: s){
           if(isalnum(c)){
            p+=tolower(c);
           }
        }
        int l = 0;
        int r = p.size()-1;
        bool found = true;
        while(l<=r){
            if(p[l]!=p[r]) {
               found = false;
               break;
            }
            l++;
            r--;
        }
        if(found) return true;
        return false;
    }
};