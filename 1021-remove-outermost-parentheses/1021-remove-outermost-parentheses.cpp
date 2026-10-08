class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<pair<char,int>> st;
        vector<int> remove;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='('){
                st.push({s[i],i});
            }
            else if(s[i]==')' && st.size()>1) st.pop();
            else if(s[i]==')' && st.size()==1){
                int a = st.top().second;
                remove.push_back(a);
                remove.push_back(i);
                st.pop();
            }
        }
        for(int i = remove.size()-1;i>=0;i--){
            s.erase(remove[i],1);
        }
        return s;
    }
};