class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> arr1(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        unordered_map<int,int> mp;
        int rank = 1;
        for(auto num : arr1){
            if(mp.find(num)==mp.end()){
                  mp[num] = rank;
                  rank++;
            }
        }
        vector<int> ans;
        for(int i = 0;i<n;i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};