class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> arr;
        for(int len = 2;len <= 9;len++){
            for(int start = 1;start <= 10-len;start++){
                int count = 0;
                int num = 0;
                int digit = start;
                while(len>count){
                     num = num*10 + digit;
                     count++;
                     digit++;
                }
                arr.push_back(num);
            }
        }
        vector<int> ans;
        for(int i = 0;i<36;i++){
            if(arr[i]>=low && arr[i]<=high) ans.push_back(arr[i]);
        }
        return ans;
    }
};