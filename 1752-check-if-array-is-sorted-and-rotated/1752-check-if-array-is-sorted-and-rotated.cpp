class Solution {
private:
    bool newarray(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        return nums == sorted;
    }

public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> original = nums;
        if (newarray(nums)) return true;
        for (int j = 1; j < n; j++) {
            vector<int> rotated(n);
            for (int i = 0; i < n; i++) {
                rotated[i] = original[(i + j) % n];
            }
            if (newarray(rotated))
                return true;
        }
        return false;
    }
};
