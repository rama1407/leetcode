class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> pq(piles.begin(),piles.end());
        long long sum = accumulate(piles.begin(),piles.end(),0LL);
        while(k>0){
            int val = pq.top();
            pq.pop();
            int x = val - val/2;
            sum-= val/2;
            pq.push(x);
            k--;
        }
        return (int)sum;
    }
};