class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        l,r = 0,1
        while r < len(prices):
            
            BUY = prices[l]
            SELL = prices[r]
            if r == len(prices)-1:
                l += 1
                r = l+1
            if BUY >= SELL:
                l = r
                r += 1
            else:
                
                profit = max(profit, SELL - BUY)
                
                r += 1
            
        return profit


                                              