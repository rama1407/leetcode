class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        stack<int> st;
        for(int i = 0;i<n;i++){
            if(!st.empty()){
                if(isupper(s[i])){
                    if(st.top()==tolower(s[i])) st.pop();
                    else st.push(s[i]);
                }
                else if(islower(s[i])){
                    if(st.top()==toupper(s[i])) st.pop();
                    else st.push(s[i]);
                }
            } 
            else st.push(s[i]);
        }
        int x = st.size();
        string rev;
        while(x){
            int c = st.top();
            rev+= c;
            st.pop();
            x--;
        }
        reverse(rev.begin(),rev.end());
        return rev;
    }
};