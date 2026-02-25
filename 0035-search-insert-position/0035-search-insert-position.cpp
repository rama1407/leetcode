class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        set<int> a(nums.begin(),nums.end());
        a.insert(target);
        vector<int> b(a.begin(),a.end());
        int n = b.size();
        int low = 0;
        int high = n-1;
        //int mid;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(b[mid]==target) return mid;
            else if(b[mid]<target) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};