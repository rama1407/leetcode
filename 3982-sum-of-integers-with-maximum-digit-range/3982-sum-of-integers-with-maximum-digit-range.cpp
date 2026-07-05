class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> digitrange;
        for(int i = 0;i<n;i++){
            int x = nums[i];
            int ma = 0;
            int mi = 9;
            while(x>0){
                   int digit = x%10;
                   ma = max(ma,digit);
                   mi = min(mi,digit);
                   x = x/10;
            }
            digitrange.push_back(ma-mi);
        }
        int value = *max_element(digitrange.begin(),digitrange.end());
        int sum = 0;
        for(int i =0;i<n;i++){
            if(digitrange[i]==value) sum+=nums[i];
        }
        
        return sum;
    }
};