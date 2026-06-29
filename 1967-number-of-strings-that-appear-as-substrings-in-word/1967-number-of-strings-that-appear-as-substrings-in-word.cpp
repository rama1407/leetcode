class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size();
        int x = word.size();
        int count = 0;
        bool found;
        for(int i = 0;i<n;i++){
            found = false;
            for(int j = 0;j<x;j++){
                if(!found){
                for(int k = j;k<x;k++){
                    string substring;
                    for(int z = j;z<=k;z++){
                        substring+=word[z];
                    }
                    if(patterns[i]==substring) {
                        count++;
                        found = true;
                    }
                }
                }
            }
        }
        return count;
    }
};