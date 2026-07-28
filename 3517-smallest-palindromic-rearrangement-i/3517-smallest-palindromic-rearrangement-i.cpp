class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
           mp[s[i]-'a']++;
        }
        string  left;
        string middle;
        for(int i = 0;i<26;i++){
            left += string(mp[i]/2,'a'+i);
            if(mp[i]%2!=0){
                int count = mp[i] - ((mp[i]/2)*2);
                middle += string(count,'a'+i);
            }
        }
        string right = left;
        reverse(right.begin(),right.end());
        string a = left + middle + right;
        return a;
    }
};