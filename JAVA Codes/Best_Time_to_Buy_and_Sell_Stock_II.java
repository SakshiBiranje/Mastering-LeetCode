public class Best_Time_to_Buy_and_Sell_Stock_II {

    // Method to calculate maximum profit
    public int maxProfit(int[] prices) {
        int ans = 0;
        for (int i = 1; i < prices.length; ++i) {
            ans += Math.max(0, prices[i] - prices[i - 1]);
        }
        return ans;
    }

    // Main method to test the maxProfit method
    public static void main(String[] args) {
        Best_Time_to_Buy_and_Sell_Stock_II calculator = new  Best_Time_to_Buy_and_Sell_Stock_II();
        
        // Example stock prices
        int[] prices = {7, 1, 5, 3, 6, 4};
        
        // Calculate maximum profit
        int profit = calculator.maxProfit(prices);
        
        // Print the result
        System.out.println("Maximum Profit: " + profit);
    }
}
