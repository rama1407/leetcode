class Solution {
public:
    int kthGrammar(int n, int k) {
       int ans = 0;
       while(n>1){
         if(k%2==0){
            ans = 1-ans;
         }
         k = (k+1)/2;
         n--;
       }
       return ans;
    }
};