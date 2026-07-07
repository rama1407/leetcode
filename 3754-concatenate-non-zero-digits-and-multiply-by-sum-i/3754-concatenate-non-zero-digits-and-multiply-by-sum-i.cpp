class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> n1;
        while(n){
            int digit = n%10;
            if(digit!=0)  n1.push_back(digit);
            n= n/10;
        }
        int sum = 0;
        int num = 0;
        for(int i = n1.size()-1;i>=0;i--){
            sum+=n1[i];
            num = num*10+n1[i];
        }
        return 1LL*num*sum;
    }
};