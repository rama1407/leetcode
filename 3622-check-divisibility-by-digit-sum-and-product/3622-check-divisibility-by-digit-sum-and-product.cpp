class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0;
        int product = 1;
        while(n){
            int digit = n%10;
            sum+=digit ;
            product*=digit;
            n = n/10;
        }
        bool ans = false;
        if(x%(sum+product)==0) ans = true;
        return ans;
    }
};