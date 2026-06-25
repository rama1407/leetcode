class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> ist;
    stack<int> fst;
    void push(int x) {
        int s1 = ist.size();
        for(int i = 1;i<=s1;i++){
            fst.push(ist.top());
            ist.pop();
        }
        ist.push(x);
        int s2 = fst.size();
        for(int j = 1;j<=s2;j++){
            ist.push(fst.top());
            fst.pop();
        }
    }
    
    int pop() {
        int ans = ist.top();
        ist.pop();
        return ans;
    }
    
    int peek() {
        return ist.top();
    }
    
    bool empty() {
        return ist.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */