#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

// O(1) space
class Solution1 {
    public: 
        int maxProfit(vector<int> &prices) {
            // buy at most min, sell at most exp
            int profit = 0;
            if (prices.empty()) {
                return 0;
            }
            for (int i = 1; i < prices.size(); ++i) {
                if (prices[i] > prices[i - 1]) {
                    profit += prices[i] - prices[i - 1];
                }
            }
            return profit;
        }
};
