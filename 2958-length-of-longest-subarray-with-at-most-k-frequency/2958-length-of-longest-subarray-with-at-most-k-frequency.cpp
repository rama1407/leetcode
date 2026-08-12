class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlength = 0;
        int l = 0;
        int r = 0;
        unordered_map<int,int> mp;
        while(r<n){
            mp[nums[r]]++;
            while(mp[nums[r]]>k){
                mp[nums[l]]--;
                l++;
            }
            maxlength = max(maxlength,r-l+1);
            r++;
        }
        return maxlength;
    }
};