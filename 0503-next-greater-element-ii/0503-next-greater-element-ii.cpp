class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0;i<n;i++){
            nums.push_back(nums[i]);
        }
        stack<int> st;
        int x = nums.size();
        for(int i = x-1;i>=0;i--){
            if(st.empty()){
                ans[i%n] = -1;
                st.push(nums[i]);
            }
            else if(nums[i]<st.top()){
                ans[i%n] = st.top();
                st.push(nums[i]);
            }
            else {
                    while(!st.empty() && st.top() <= nums[i]) st.pop();
                    if(st.empty()) {
                        ans[i%n] = -1;
                        st.push(nums[i]);
                    }
                    else {
                        ans[i%n] = st.top();
                        st.push(nums[i]);
                    }
                }
        }
        return ans;
    }
};