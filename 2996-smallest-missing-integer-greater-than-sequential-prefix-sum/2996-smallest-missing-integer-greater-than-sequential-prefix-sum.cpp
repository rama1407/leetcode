class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        while(i<n && nums[i]==nums[i-1]+1) i++;
        int sum = 0;
        for(int k = 0;k<i;k++){
            sum+=nums[k];
        }
        int ans = sum;
        while(true){
            bool found = false;
            for(int k = 0; k<n;k++){
                 if(nums[k]==ans) {
                    found = true;
                    break;
                 }
            }
                 if(!found){
                    return ans;
                 }
                 ans++;
        }
    }
};