class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int> mp(26);
        for(char c: s){
            mp[c-'a']++;
        }
        string  left;
        string middle;
        for(int i = 0;i<26;i++){
            left += string(mp[i]/2,'a'+i);
            if(mp[i]%2!=0){
                middle += string(1,'a'+i);
            }
        }
        string right = left;
        reverse(right.begin(),right.end());
        string a = left + middle + right;
        return a;
    }
};