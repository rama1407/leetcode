class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            int sum = 0;
            while(nums[i]>0){
                int digit = nums[i]%10;
                sum += digit;
                nums[i] = nums[i]/10; 
            }
            if(sum==i) {
                return i;
            }
            else i++;
        }
        return -1;
    }
};