class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int* left = &prices[0];
        int* right = &prices[1];
        int maxProfit = 0;

        if (prices.empty()) {
            return 0;
        }

        while (right!= prices.data() + prices.size()) {
            if (*right <= *left) {
                left = right;
            }
            else {
                maxProfit = max(maxProfit, *right - *left);
            }
            ++right;
        }

        return maxProfit;
    }
};