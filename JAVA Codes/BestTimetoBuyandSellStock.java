public class BestTimetoBuyandSellStock {
    public int maxProfit(int[] prices) {
        if (prices == null || prices.length == 0) {
            return 0;
        }
        
        int ans = 0;
        int min = prices[0];
        
        for (int value : prices) {
            ans = Math.max(ans, value - min);
            min = Math.min(min, value);
        }
        
        return ans;
    }

    public static void main(String[] args) {
        BestTimetoBuyandSellStock sol = new BestTimetoBuyandSellStock();
        int[] prices = {7, 1, 5, 3, 6, 4}; 
        System.out.println("Max Profit: " + sol.maxProfit(prices));
    }
}
