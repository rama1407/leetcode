class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;
       int original = x;
       long long reversednumber = 0;
       while(x>0){
        int digit = x%10;
        reversednumber = reversednumber*10+digit;
        x = x/10;
       }
       if(original == reversednumber) return true;
        return false;
    }
};