class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxprofit=0;

        for (int i=1;i<prices.size();i++){
            if (prices[i]>mini){
                int x=prices[i]-mini;
                if (x>maxprofit) maxprofit=x;
            }
            mini=min(prices[i],mini);
        }
        return maxprofit;
    }
};
