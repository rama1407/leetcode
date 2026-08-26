class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int maxlength = INT_MAX;
        int n = s.size();
        string ans;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                string subs;
                int count = 0;
                for(int x = i;x<=j;x++){
                    subs+=s[x];
                    if(s[x]=='1') count++;
                }
                if(count==k) {
                    if(maxlength>j-i+1) {
                        maxlength = j-i+1;
                        ans = subs;
                    }
                     else if (maxlength == j-i+1) { 
                        if (subs < ans) {
                            ans = subs;
                        }
                    }
                    else ans = ans;
                }
            }
        }
        return ans;
    }
};