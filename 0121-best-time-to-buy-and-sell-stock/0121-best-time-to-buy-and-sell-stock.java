class Solution {
    public int maxProfit(int[] prices) {
        int minprice = 987654321;
        int maxprofit = 0;
        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < minprice) minprice = prices[i];
            else if (prices[i] - minprice > maxprofit) maxprofit = prices[i] -
            minprice;
        }
        return maxprofit;
    }
}