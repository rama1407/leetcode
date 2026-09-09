class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long count = 0;
        if(n>=1000) count+=n-999;
        if(n>=1000000) count+= n-999999;
        if(n>=1000000000) count+= n - 999999999;
        if(n>=1000000000000) count+= n - 999999999999;
        if(n==1000000000000000) count +=1;
        return count;
    }
};