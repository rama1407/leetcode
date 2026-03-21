class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string s: words){
             unordered_map<char,char> m1;
             unordered_map<char,char> m2;
             bool found = true;
            for(int j = 0;j<pattern.size();j++){
                char a = s[j];
                char b = pattern[j];
                if(m1.count(a)&&m1[a]!=b) found = false;
                if(m2.count(b)&&m2[b]!=a) found = false;
                m1[a]=b;
                m2[b]=a;
            }
            if(found) ans.push_back(s);
        }
        return ans;
    }
};