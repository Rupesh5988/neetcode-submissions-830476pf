class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minstock=prices[0];
        for(int i: prices){
            minstock=min(minstock,i);
            maxprofit=max(maxprofit,i-minstock);
        }
        return  maxprofit;
    }
};
