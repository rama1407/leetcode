class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for(int j = 0;j<k;j++){
            sum = sum+nums[j];
        }
        int maxsum = sum;
        for(int i =k;i<n;i++){
            sum = sum+nums[i];
            sum = sum-nums[i-k];
            maxsum = max(maxsum,sum);
        }
        return (double)maxsum/k;
    }
};