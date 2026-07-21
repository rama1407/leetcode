class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long num = 0;
        int i = 0;
        bool found = false;
        while(i<n && s[i]==' ') i++;
        if(i==n) return 0;
        if(s[i]=='-' ) {
            found = true;
            i++;
        }
        else if(s[i]=='+') i++;
        while(i<n && s[i]=='0'){
                i++;
        }
        if(i==n) return 0;
        for(int j = i;j<n;j++){
            if(isdigit(s[j])){
               num = num *10 + (s[j] - '0');
            }
            else break;
            if(found) {
                if(num > INT_MAX) return INT_MIN;
            }
            else  if(num > INT_MAX) return INT_MAX;
        }
        if(found) num =  -1*num;
        return num;
    }
};