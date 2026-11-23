class ProductOfNumbers {
public:
    vector<int> numbers;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        numbers.push_back(num);
    }
    
    int getProduct(int k) {
        int n = numbers.size();
        int ans = 1;
        for(int i = n-1;i>=n-k;i--){
            ans = ans*numbers[i];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */