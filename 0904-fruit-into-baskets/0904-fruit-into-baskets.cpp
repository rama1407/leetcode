class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int n = fruits.size();
       int maxlen = 0;
       int l = 0;
       map<int,int> a;
       int r = 0;
       while(r<n){
           a[fruits[r]]++;
           if(a.size()>2){
            a[fruits[l]]--;
            if(a[fruits[l]]==0 ) a.erase(fruits[l]);
            l++;
           }
           else if(a.size()<=2){
           maxlen =  max(maxlen,r-l+1);
           }
           r++;
       }
       return maxlen;
    }
};   
