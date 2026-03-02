class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
        int maxprofit = 0;
         int profit;
        for(int i:prices){
            minp = min(minp,i);
           profit = i-minp;
            maxprofit = max(profit,maxprofit);
        }
        return maxprofit;
    }
};