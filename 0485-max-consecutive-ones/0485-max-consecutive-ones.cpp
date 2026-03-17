class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max1 =0;
        int l = 0;
        int r = 0;
        for(int i = 0;r<n;r++){
            if(nums[r]==1){
                max1 = max(max1,r-l+1);
            }
            else {
             l = r+1;
            }
        }
        return max1;
    }
};