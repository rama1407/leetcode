class Solution {
public:
    void f(int i,int j, vector<char>& s){
        if(i>=j) return;
        swap(s[i],s[j]);
        f(i+1,j-1,s);
    }
    void reverseString(vector<char>& s) {
        f(0,s.size()-1,s);
    }
};