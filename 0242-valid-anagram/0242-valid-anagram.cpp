class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> a;
        map<char,int> b;
        for(char c: s)
        {
            a[c]++;
        }
        for(char c: t)
        {
            b[c]++;
        }
       return a==b;
    }
};