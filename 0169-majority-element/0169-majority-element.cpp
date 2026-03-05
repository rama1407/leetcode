class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int estimated_element;
        int count;
        for(int i =0;i<n;i++){
            if(count == 0){
                estimated_element = nums[i];
                count = 1;
            }
            else if(nums[i]==estimated_element) count++;
            else count--;
        }
        int count1 = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==estimated_element) count1++;
        }
        if(count1>(n/2))
         {return estimated_element;}
        return 0;
    }
};