class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int minnum = *min_element(nums.begin(),nums.end());
        int maxnum = *max_element(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = minnum+1;i<maxnum;i++){
            bool found = false;
            for(int j = 0;j<n;j++){
                if(nums[j]==i) found = true;
            }
            if(!found) ans.push_back(i);
        }
        return ans;
    }
};