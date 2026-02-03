class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;           
        if (k == 0) return;
        vector<int> temp;
        for (int i = 0; i < n - k; i++) {
            temp.push_back(nums[i]);
        }
        for (int j = 0; j < k; j++) {
            nums[j] = nums[j + (n - k)];
        }
        for (int x = k; x < n; x++) {
            nums[x] = temp[x - k];
        }
    }
};
