class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur=0, maxp=0,buy=0,sell=1;
        while(sell<prices.size())
        {
            cur = prices[sell] - prices[buy];
            maxp = max(maxp,cur);
            if(cur < 0)
                buy = sell;
            sell++;
        }
        return maxp;
    }
};