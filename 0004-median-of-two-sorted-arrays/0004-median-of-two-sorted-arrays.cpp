class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        for(int i = 0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int m = nums1.size();
        double val;
        if(m%2==0) {
            int x = nums1[m/2] + nums1[m/2-1];
            val = x/2.0;
        }
        else val = nums1[m/2];
        return val;
    }
};