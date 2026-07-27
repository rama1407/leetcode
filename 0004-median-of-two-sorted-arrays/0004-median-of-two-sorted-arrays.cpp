class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int m = nums1.size();
        int j = n-1;
        int i = m-1;
        int k = m+n-1;
        nums1.resize(m + n);
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        int M = nums1.size();
        if(M%2!=0) return nums1[M/2];
        else return (nums1[M/2]+nums1[M/2-1])/2.0;
    }
};