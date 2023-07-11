class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ma = 0;
        int curr = 0;
        for (int i = 1; i < prices.size(); i++) {
            curr += prices[i]- prices[i - 1];
            curr = max(0, curr);
            ma = max(ma, curr);
        }
        return ma;
    }
};
