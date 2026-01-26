class Solution {
public:
    int findNumbers(vector<int>& nums) {
         int count = 0;
         for(int i = 0; i<nums.size();i++)
         {
            int count1 = 0;
            while(nums[i])
            {
                nums[i] =nums[i]/10;
                count1++;
            }
            if(count1%2==0)
            {
                count++;
            }
         }
         return count;
    }
};