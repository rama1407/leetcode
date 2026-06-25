class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>> st;
    void push(int value) {
        int s = st.size();
        int min = INT_MAX;
        if(s==0){
            st.push({value,value});
        }
        else {
            if(st.top().second<value){
                min = st.top().second;
            }
            else min = value;
            st.push({value,min});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */