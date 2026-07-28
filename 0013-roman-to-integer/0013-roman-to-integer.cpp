class Solution {
public:
    int value(char c){
        if(c=='I') return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else  return 1000;
    }
    int romanToInt(string s) {
        int num = 0;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(i == n-1 || value(s[i]) >= value(s[i+1])) {
                     num += value(s[i]);
                }
            else {
                     num += value(s[i+1]) - value(s[i]);
                    i++;
                    }
        }
        return num;
    }
};