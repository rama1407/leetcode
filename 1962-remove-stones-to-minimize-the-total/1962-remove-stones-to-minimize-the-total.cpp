class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> pq;
        for(int it: piles){
            pq.push(it);
        }
        while(k>0){
            int val = pq.top();
            pq.pop();
            int x = val - floor(val/2);
            pq.push(x);
            k--;
        }
        int sum = 0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};