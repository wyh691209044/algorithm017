class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int conunt5 = 0;
        int conunt10 = 0;
        for(int i = 0;i<bills.size();i++){
            if(bills[i] == 5){
                conunt5++;
            }else if(bills[i] == 10){
                conunt10++;
                conunt5--;
            }else if(bills[i] == 20){
                if(conunt10 > 0){
                    conunt10--;
                    conunt5--;
                }else {
                    conunt5 -= 3;
                }
            }
            if(conunt5 < 0)return false;
        }       
        return true;
    }
};