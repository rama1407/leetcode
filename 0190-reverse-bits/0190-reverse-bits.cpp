class Solution {
public:
    int reverseBits(int n) {
        vector<int> ans;
        for(int i = 0;i<32;i++){
            ans.push_back(n&1);
            n = n>>1;
        }
        long long num = 0;
        long long p = 1;
        for(int i = 31;i>=0;i--){
               if(ans[i]==1) num = num + p;
               p = p*2;
        }
        return (int)num;
    }
};