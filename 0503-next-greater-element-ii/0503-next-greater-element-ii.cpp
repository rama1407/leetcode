class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            bool found = false;
            for(int j = i+1;j<=i+n-1;j++){
                int index = j%n;
                if(nums[index]>nums[i]) {
                    found = true;
                    ans.push_back(nums[index]);
                    break;
                }
            }
            if(!found) ans.push_back(-1);
        }
        return ans;
    }
};