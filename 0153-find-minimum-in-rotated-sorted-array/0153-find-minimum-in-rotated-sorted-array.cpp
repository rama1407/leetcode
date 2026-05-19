class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int minval = 5000;
        while(low<=high){
            int mid = (low+high)/2;
            minval = min(minval,nums[mid]);
            if(nums[low]<=nums[mid]){
                minval = min(minval,nums[low]);
                low = mid+1;
            }
            else {
                minval = min(minval,nums[mid+1]);
                high = mid-1;
            }
        }
        return minval;
    }
};