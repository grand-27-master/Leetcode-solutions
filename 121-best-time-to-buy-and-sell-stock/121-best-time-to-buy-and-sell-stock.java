class Solution {
    public int maxProfit(int[] prices) {
        int min_cost=Integer.MAX_VALUE;
        int max_profit=0;
        for(int i=0;i<prices.length;i++)
        {
           min_cost=Math.min(min_cost,prices[i]);
            max_profit=Math.max(max_profit,prices[i]-min_cost);
        }
        
        return max_profit;
    }
}