class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it: s){
            if(it == '(' || it == '[' || it == '{') st.push(it);
            else if(it == ')') {
                if(!st.empty() && st.top() == '(') st.pop();
                else st.push(it);
            }
            else if(it == '}') {
                if(!st.empty() && st.top() == '{') st.pop();
                else st.push(it);
            }
            else if(it == ']') {
                if(!st.empty() && st.top() == '[') st.pop();
                else st.push(it);
            }
        }
        return st.empty()?true:false;
    }
};

