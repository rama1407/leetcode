class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==0){
                a.push_back(nums[i]);
            }
        }
        for(int j =0;j<n;j++){
            if(nums[j]==1){
                a.push_back(nums[j]);
            }
        }
        for(int k =0;k<n;k++){
            if(nums[k]==2){
                a.push_back(nums[k]);
            }
        }
        nums.erase(nums.begin(),nums.end());
        nums = vector<int>(a.begin(), a.end());
    }
};