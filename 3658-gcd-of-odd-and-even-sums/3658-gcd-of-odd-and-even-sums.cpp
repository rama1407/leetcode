class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 1;
        int evensum = 2;
        int even = 2;
        int odd = 1;
        for(int i = 1;i<n;i++){
             even = even + 2;
             odd = odd + 2;
             sumodd = sumodd+odd;
             evensum+= even;
        }
        return gcd(sumodd,evensum);
    }
};