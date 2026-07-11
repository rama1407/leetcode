class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int count5 = 0;
        int count10 = 0;
        bool found = true;
        for(int i = 0;i<n;i++){
            if(bills[i]==5) count5++;
            else if(bills[i]==10){
                count10++;
                if(count5 > 0){
                    count5--;
                }
                else {
                    found = false;
                    break;
                }
            }
            else {
                if(count5 > 0 && count10 > 0){
                    count5--;
                    count10--;
                }
                else if(count10 == 0 && count5 >= 3){
                    count5--;
                    count5--;
                    count5--;
                }
                else {
                    found = false;
                    break;
                }
            }
        }
        return found;
    }
};