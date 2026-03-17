class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mincount = INT_MAX;
        int sum = 0;
        int l = 0;
        int r = 0;
        while(r<n){
            sum = sum + nums[r];
            while(sum>=target){
                mincount = min(mincount,r-l+1);
                sum = sum - nums[l];
                l++;
            }
            r++;
        }
        
       if(mincount!= INT_MAX) return mincount;
       return 0;
    }
};