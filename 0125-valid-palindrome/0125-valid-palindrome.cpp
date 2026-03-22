class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(char c: s){
           if(isalnum(c)){
            p+=tolower(c);
           }
        }
        string t = p;
        reverse(p.begin(),p.end());
        bool found = true;;
        for(int i = 0;i<p.size();i++){
            if(p[i]!=t[i]){
                found = false;
                break;
            }
        } 
        if(found) return true;
        return false;
    }
};