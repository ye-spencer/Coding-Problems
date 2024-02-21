class Solution(object):
    def maxProfit(self, prices):
        most = 0
        if len(prices) < 2:
            return 0
        least = prices[0]
        for price in prices:
            if price < least:
                least = price
            most = max(most, price - least)
        return most
        

        