#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int ans = 0;
        int min = prices[0];

        for (int price : prices) {
            ans = std::max(ans, price - min);
            min = std::min(min, price);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4}; 
    std::cout << "Max Profit: " << sol.maxProfit(prices) << std::endl;
    return 0;
}
