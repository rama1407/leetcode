class NumArray {
public:
    vector<int> arr;
    vector<int> BIT;
    int n;
    NumArray(vector<int>& nums) {
        arr = nums;
        n = nums.size();
        BIT.resize(n+1,0);
        for(int i = 0;i<n;i++){
            add(i,nums[i]);
        }
    }
    void add(int i,int val){
        i= i+1;
        while(i<=n){
        BIT[i]+=val;
        i = i + (i&-i); 
       }
    }
    int prefixsum(int i){
        i = i+1;
        int sum = 0;
        while(i>0){
            sum += BIT[i];
            i -= (i&-i);
        }
        return sum;
    }
    void update(int index, int val) {
       int diff = val - arr[index];
       arr[index] = val;
       add(index,diff);
    }
    
    int sumRange(int left, int right) {
        if(left==0) return prefixsum(right);
        return prefixsum(right) - prefixsum(left-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */