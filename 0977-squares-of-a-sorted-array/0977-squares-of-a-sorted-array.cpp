class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
           int n = nums.size();
           vector<int> a;
           for(int i =0;i<n;i++)
           {
            a.push_back(nums[i]*nums[i]);
           }
           sort(a.begin(),a.end());
           return a;
    }
};