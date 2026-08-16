class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == divisor) return 1;
        bool sign = true;
        if(dividend > 0 && divisor < 0) sign = false;
        if(dividend < 0 && divisor > 0) sign = false;
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans = 0;
        while(n >= d) {
            int counter = 0;
            while(n >= (d << (counter + 1)))
                counter++;
            ans += (1LL << counter);
            n -= (d << counter);
        }
        if(sign && ans > INT_MAX)
            return INT_MAX;
        if(!sign && ans > 2147483648LL)
            return INT_MIN;
        if(!sign)
            return -ans;
        return ans;
    }
};