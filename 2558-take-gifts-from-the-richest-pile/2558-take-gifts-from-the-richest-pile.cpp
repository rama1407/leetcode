class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        priority_queue<int> pq;
        for(auto it:gifts) pq.push(it);
        while(k>0){
            int val = pq.top();
            pq.pop();
            pq.push(floor(sqrt(val)));
            k--;
        }
        while(!pq.empty()){
            ans = ans + pq.top();
            pq.pop();
        }
        return ans;
    }
};