class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxlength = 0;
        for(int i = 0;i<n;i++){
            unordered_map<char,int> mp;
            int count = 0;
            for(int j = i;j<n;j++){
                  mp[s[j]]++;
                  if(mp[s[j]]>2){
                    break;
                  }
                count++;
            }
             maxlength = max(maxlength,count);
        }
        return maxlength;
    }
};