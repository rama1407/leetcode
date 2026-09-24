class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int i = 0;
        while(true && i<n){
            int sum = 0;
            while(nums[i]>0){
                int digit = nums[i]%10;
                sum += digit;
                nums[i] = nums[i]/10; 
            }
            if(sum==i) {
                ans = i;
                break;
            }
            else i++;
        }
        return ans;
    }
};