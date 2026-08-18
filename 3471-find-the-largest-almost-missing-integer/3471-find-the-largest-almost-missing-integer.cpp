class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int i = 0;
        while(i<=n-k){
            unordered_set<int> st;
            for(int j = i;j<i+k;j++){
                st.insert(nums[j]);
            }
            for(auto it: st) mp[it]++;
            i++;
        }
        int maxnum = -1;
        for(auto it: mp){
             if(it.second==1) maxnum = max(maxnum,it.first);
        }
        return maxnum;
    }
};