class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count = 0;
        int a = -1,b=-1,c=-1;
        for(int i = 0;i<n;i++){
            if(s[i]=='a') a = i;
            else if(s[i]=='b') b = i;
            else c = i;
            if(a!=-1 && b!=-1 && c!=-1){
                count += min({a,b,c})+1;
            }
        }
        return count;
    }
};