class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0;i<=n;i++){
            int count = 0;
            int n = i;
            while(n){
                if(n%2==1) count++;
                n = n/2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};