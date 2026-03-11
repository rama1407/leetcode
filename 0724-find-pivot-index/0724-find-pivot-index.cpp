class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        for(int i = 0;i<n;i++){
            totalsum = totalsum+nums[i];
        }
        int leftsum = 0;
        for(int j = 0;j<n;j++){
           if(leftsum == totalsum-leftsum-nums[j]){
             return j;
           }
           leftsum = leftsum+nums[j];
        }
        return -1;
    }
};