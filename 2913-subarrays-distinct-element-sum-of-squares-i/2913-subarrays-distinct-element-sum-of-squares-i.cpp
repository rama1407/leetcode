class Solution { 
public: 
    int sumCounts(vector<int>& nums) { 
        vector<int> ans; 
        int n = nums.size(); 
        
        for(int i = 0; i < n; i++){ 
            for(int j = i; j < n; j++){ 
                unordered_map<int, int> mp; 
                for(int k = i; k <= j; k++){ 
                    mp[nums[k]]++; 
                } 
                int distinct_count = mp.size();
                ans.push_back(distinct_count);
            } 
        } 
        
        int sum = 0; 
        for(int i = 0; i < ans.size(); i++){ 
            sum += (ans[i] * ans[i]); 
        } 
        return sum; 
    } 
};
