class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxcount = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(') count = count + 1;
            else if(s[i]==')'){
                maxcount = max(maxcount,count);
                count--;
            }
            else continue;
        }
        return maxcount;
    }
};