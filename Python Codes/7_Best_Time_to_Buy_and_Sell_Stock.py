class Solution:
    def maxProfit(self, prices):
        if not prices:
            return 0

        ans = 0
        min_price = prices[0]

        for price in prices:
            ans = max(ans, price - min_price)
            min_price = min(min_price, price)

        return ans

if __name__ == "__main__":
    sol = Solution()
    prices = [7, 2, 5, 3, 6, 4] 

    print("Max Profit:", sol.maxProfit(prices))
