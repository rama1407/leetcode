class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum;
        leftsum.resize(n);
        vector<int> rightsum;
        rightsum.resize(n);
        vector<int> ans;
        ans.resize(n);
        leftsum[0]=rightsum[n-1] =0;
        for(int i = 1;i<=n-1;i++){
            leftsum[i] = leftsum[i-1]+nums[i-1];
        }
        for(int i = n-2;i>=0;i--){
            rightsum[i] = rightsum[i+1]+nums[i+1];
        }
        for(int j = 0;j<n;j++){
            ans[j] = abs(leftsum[j]-rightsum[j]);
        }
        return ans;
    }
};