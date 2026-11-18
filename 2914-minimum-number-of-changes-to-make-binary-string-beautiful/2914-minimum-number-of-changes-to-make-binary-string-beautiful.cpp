class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0;i<n;i+=2){
            int c0 = 0;
            int c1 = 0;
            if(s[i]=='0') c0++;
            else c1++;
            if(s[i+1]=='0') c0++;
            else c1++;
            if(c0>c1) ans+=c1;
            else ans+=c0;
        }
        return ans;
    }
};