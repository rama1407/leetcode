class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = s[0];
        for(int i = 1;i<s.size();i++) result ^= s[i];
        char ans = t[0];
        for(int i = 1;i<t.size();i++) ans^= t[i];
        return result ^ ans;
    }
};