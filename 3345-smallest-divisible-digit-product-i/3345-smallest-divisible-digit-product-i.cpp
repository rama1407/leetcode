class Solution {
    int digit(int x){
        int n = x;
        int product = 1;
        while(n){
            product = product*(n%10);
            n = n/10;
        }
        return product;
    }
public:
    int smallestNumber(int n, int t) {
        while(true){
            if(digit(n)%t==0){
                return n;
            }
            n++;
        }
    }
};