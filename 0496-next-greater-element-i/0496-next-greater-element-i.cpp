class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size();
        int y =  nums2.size();
        int arr[y];
        stack<int> st;
        for(int i = y-1;i>=0;i--){
             if(st.empty()){
                arr[i]=-1;
                st.push(nums2[i]);
             }
             else {
                if(nums2[i]<st.top()){
                    arr[i]=st.top();
                    st.push(nums2[i]);
                }
                else {
                    while(!st.empty() && st.top() <= nums2[i]) st.pop();
                    if(st.empty()) {
                        arr[i] = -1;
                        st.push(nums2[i]);
                    }
                    else {
                        arr[i] = st.top();
                        st.push(nums2[i]);
                    }
                }
             }
        }
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0;i<y;i++){
            mp[nums2[i]] = arr[i];
        } 
        for(int i = 0;i<x;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};