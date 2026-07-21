class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long n = x;
        bool found = false;
        if(n<0) {
            found = true;
            n = n*-1;
        }
        while(n>0){
            long long digit = n%10;
            rev = rev *10 + digit;
            n = n/10;
            if(rev < INT_MIN || rev > INT_MAX) return 0;
        }
        if(found) rev = rev * -1;
        return (int)rev;
    }
};