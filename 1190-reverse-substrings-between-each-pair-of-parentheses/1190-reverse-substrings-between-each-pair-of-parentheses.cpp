class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                int val = st.top();
                st.pop();
                reverse(s.begin()+val+1,s.begin()+i);
            }
        }
        string ans;
        for(int i = 0;i<s.size();i++){
            if(s[i]!='('&& s[i]!=')') ans+=s[i];
        }
        return ans;
    }
};