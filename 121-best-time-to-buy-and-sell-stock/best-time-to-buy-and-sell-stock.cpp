class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=prices[0],maxprofit=0;
        for(int i=0;i<prices.size();i++){
            maxprofit=max(maxprofit,prices[i]-left);
            left=min(left,prices[i]);
        }
        return maxprofit;
    }
};