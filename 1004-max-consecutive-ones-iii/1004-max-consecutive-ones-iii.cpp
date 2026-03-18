class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxcount = 0;
        int l = 0;
        int count0 = 0;
        int r = 0;
        while(r<n){
            if(nums[r]==0) count0++;
           while(count0>k){
                if(nums[l]==0) count0--;
                l++;
            }
            maxcount = max(maxcount,r-l+1);
            r++;
        }
        return maxcount;
    }
};