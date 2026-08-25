class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans;
        for(int i = 1;i<=nums.size();i++){
            int val = k*i;
            bool found = false;
            for(int j = 0;j<nums.size();j++){
                if(nums[j]==val){
                    found = true;
                    break;
                }
            }
            if(!found) {
                ans = val;
                break;
            }
        }
        return ans;
    }
};