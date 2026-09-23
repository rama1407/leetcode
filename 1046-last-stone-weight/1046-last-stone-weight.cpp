class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int it: stones){
            pq.push(it);
        }
        while(pq.size()>=2){
            int val1 = pq.top();
            pq.pop();
            int val2 = pq.top();
            pq.pop();
            if(val2<val1){
                pq.push(val1-val2);
            }
        }
        return pq.empty()?0:pq.top();
    }
};