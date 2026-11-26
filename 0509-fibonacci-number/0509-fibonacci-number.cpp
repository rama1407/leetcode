class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        vector<int> dp(2,0);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2;i<=n;i++){
            if(i%2==0) dp[0] = dp[0] + dp[1];
            else dp[1] = dp[1]+dp[0];
        }
        if(n%2==0) return dp[0];
        else return dp[1];
    }
};