class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(target==nums[i]) return i;
        }
        if(target==0 && nums[0]>0) return 0;
        if(nums[0]>target) return 0;
        if(n==1 && nums[0]>target) return 0;
        if(n==1 && nums[0]<target) return 1;
        int q = n-1;
        while(q>=0){
           if(nums[q]<target) return q+1;
           q--;
        }
        return -1;
    }
};