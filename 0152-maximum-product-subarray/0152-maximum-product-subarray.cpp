class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long maxproduct = nums[0];
        long long minproduct = nums[0];
        long long product = nums[0];
        for(int i = 1;i<n;i++){
           if(nums[i]<0){
            swap(maxproduct,minproduct);
           }
            maxproduct = max((long long)nums[i],maxproduct*nums[i]);
            minproduct = min((long long)nums[i],minproduct*nums[i]);
            product = max(product,maxproduct);
        }

        return (int)product;
    }
};