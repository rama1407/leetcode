class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> a = stones;
        int n = a.size();
        if(n==1) return stones[0];
        if(n==2){
            if(a[0]<a[1]) return a[1]-a[0];
            else if(a[0] > a[1]) return a[0]-a[1];
            else return 0;
        }
        bool found = true;
        while(found){
            sort(a.begin(),a.end());
            if(a[n-2]==a[n-1]) {
                n = n-2;
            }
            else if(a[n-2]<a[n-1]) {
                a[n-2] = a[n-1] - a[n-2];
                n = n-1;
            }
            if(n==0 || n==1) {
                found = false;
            }
        }
        if(n==1) return a[0];
        else return 0;
    }
};