class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int l = 0;
        int r = n-1;
        while(l<n){
            if(nums[l]==target){
                ans.push_back(l);
                break;
            }
            l++;
        }
        while(r>=0){
            if(nums[r]==target){
                ans.push_back(r);
                break;
            }
            r--;
        }
        if(ans.size()==0){
           ans.push_back(-1);
           ans.push_back(-1);
        }
        return ans;
    }
};