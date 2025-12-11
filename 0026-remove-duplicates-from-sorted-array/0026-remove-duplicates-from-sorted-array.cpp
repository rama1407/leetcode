class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> a(nums.begin(),nums.end());
       nums.erase(nums.begin(),nums.end());
       vector<int> nums1(a.begin(),a.end());
       for(int i = 0;i<nums1.size();i++)
       {
        nums.push_back(nums1[i]);
       }
       return nums.size();
    }
};