class Solution {
public:
    vector<int> arr = vector<int>(46,-1);
    int climbStairs(int n) {
        if(n<=2) {
            arr[n]=n;
            return arr[n];
        }
        else if(arr[n]!=-1) return arr[n];
        return arr[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};