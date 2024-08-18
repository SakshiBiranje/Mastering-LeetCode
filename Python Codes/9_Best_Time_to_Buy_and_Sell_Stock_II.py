class Solution:
    def maxProfit(self, prices):
        ans = 0
        for i in range(1, len(prices)):
            if prices[i] > prices[i - 1]:
                ans += prices[i] - prices[i - 1]
        return ans

if __name__ == "__main__":
    solution = Solution()
    prices = [7, 1, 5, 3, 6, 4]
    profit = solution.maxProfit(prices)
    print("Maximum Profit:", profit)
