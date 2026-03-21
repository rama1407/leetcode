class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        vector<string> words;
        string word;
        for(char c:s){
            if(c == ' '){
                words.push_back(word);
                word = "";
            }
            else
              word = word+c;
        }
        words.push_back(word);
        if(words.size()!=pattern.size()) return false;
        for(int i =0;i<pattern.size();i++){
            char a = pattern[i];
            string b = words[i];
            if(m1.count(a)&&m1[a]!=b) return false;
            if(m2.count(b)&&m2[b]!=a) return false;
            m1[a]=b;
            m2[b]=a;
        }
        return true;
    }
};