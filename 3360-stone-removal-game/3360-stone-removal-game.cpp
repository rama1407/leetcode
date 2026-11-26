class Solution {
public:
    bool canAliceWin(int n) {
        bool ans = false;
        for(int i = 10;i>=0;i--){
            if(n>=i && i%2==0){
                ans = true;
                n = n-i;
            }
            else if(n>=i && i%2!=0){
                ans = false;
                n = n-i;
            }
            else if(n<i) break;
        }
        return ans;
    }
};