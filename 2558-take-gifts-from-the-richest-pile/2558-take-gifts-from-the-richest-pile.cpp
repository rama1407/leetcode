class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        while(k>0){
            sort(gifts.begin(),gifts.end());
            int x = gifts[gifts.size()-1];
            int val = floor(sqrt(x));
            gifts[gifts.size()-1] = val;
            k--;
        }
        for(auto it : gifts){
            ans+=it;
        }
        return ans;
    }
};