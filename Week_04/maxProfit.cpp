class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        if(prices.size() <= 1)return 0;
        for(int i = 1;i<prices.size();i++){
            int dis =prices[i] - prices[i-1];
            if(dis > 0){
                max += dis;
            }
        }
        return max;
    }
};