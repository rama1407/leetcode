class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        multiset<int> a;
        for(int it: stones){
            a.insert(it);
        }
        while(a.size()>=2){
            int val1 = *a.rbegin();
            a.erase(prev(a.end()));
            int val2 = *a.rbegin();
            a.erase(prev(a.end()));
            if(val2<val1) a.insert(val1 - val2);   
        }
        if(a.size()==1) return *a.rbegin();
        else return 0;
    }
};