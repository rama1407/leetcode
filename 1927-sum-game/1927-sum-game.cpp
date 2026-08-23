class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int ls = 0;
        int rs = 0;
        int ql = 0;
        int qr = 0;
        for(int i = 0;i<n/2;i++){
            if(num[i]=='?') ql++;
            else ls += (num[i] - '0');
        }
        for(int i = n/2;i<n;i++){
            if(num[i]=='?') qr++;
            else rs += (num[i] - '0');
        }
       int val = (qr-ql)*9;
       if(2*(ls-rs)==val) return false;
       else return true;
    }
};