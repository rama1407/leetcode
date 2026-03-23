class Solution {
public:
    int countSubstrings(string s){
        int n = s.size();
        int count = 0;
        for(int i = 0;i<n;i++){
            int l = i;
            int r = i;
            while(l>=0&&r<n&&s[l]==s[r]){
                count++;
                l--;
                r++;
            }
            int l2 = i;
            int r2 = i+1;
            while(l2>=0&&r2<n&&s[l2]==s[r2]){
                count++;
                l2--;
                r2++;
            }
        }
        return count;
    }
};