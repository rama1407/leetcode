class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int count = 0;
        sort(intervals.begin(),intervals.end(),[](const vector<int>& a, const vector<int>& b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            else return a[0]<b[0];
        });
        int max_end = 0;
        for(int i = 0;i<n;i++){
            if(intervals[i][1]<=max_end) count++;
            else max_end = intervals[i][1];
        }
        return n-count;
    }
};