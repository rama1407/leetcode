class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            int suml = 0;
            int sumr = 0;
            for(int j = 0;j<i;j++){
                suml = suml+ nums[j];
            }
            for(int j = i+1;j<n;j++){
                sumr = sumr+nums[j];
            }
            if(suml==sumr) return i;
        }
        return -1;
    }
};