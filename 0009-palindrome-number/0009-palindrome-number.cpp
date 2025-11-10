class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)  return false;
        long long reversedigit = 0;
        int original = x;
        while(x!=0)
        {
        int digit = x%10;
        x /= 10;
        reversedigit = reversedigit*10 + digit;
        }
        if(original == reversedigit) return true;
        return false;
    }
};