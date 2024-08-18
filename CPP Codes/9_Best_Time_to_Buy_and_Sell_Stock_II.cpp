#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class StockProfitCalculator 
{
public:
    int maxProfit(const vector<int>& prices) 
    {
        int ans = 0;
        for (size_t i = 1; i < prices.size(); ++i) 
        {
            ans += max(0, prices[i] - prices[i - 1]);
        }
        return ans;
    }
};

int main() 
{
    StockProfitCalculator calculator;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = calculator.maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl;
    return 0;
}
