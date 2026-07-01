class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> st;
        for(int i = 0;i<n;i++){
            if(!st.empty() && s[i]==st.top()) st.pop();
            else st.push(s[i]);
        }
        int x = st.size();
        string rev;

        while(x){
            char c = st.top();
            rev += c;
            st.pop();
            x--;
        }
        reverse(rev.begin(),rev.end());
        return rev;
    }
};