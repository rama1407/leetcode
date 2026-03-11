class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
       vector<int> ans;
       ans.resize(n);
       int totalsum = 0;
       for(int i = 0;i<n;i++){
           totalsum = totalsum+nums[i];
       }
       int leftsum = 0;
       int rightsum = 0;
       for(int i = 0;i<n;i++){
           rightsum = totalsum - leftsum - nums[i];
           ans[i] = abs(leftsum - rightsum);
           leftsum+= nums[i];
       }
        return ans;
    }
};