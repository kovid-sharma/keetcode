class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini=INT_MAX;
        int dif=0;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(prices[i],mini);
            dif=max(dif,prices[i]-mini);
        }
        return dif;
    }
};