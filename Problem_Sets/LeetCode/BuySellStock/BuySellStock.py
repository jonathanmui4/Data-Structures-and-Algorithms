class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left, right = 0, 1
        maxProfit = 0
        while right < len(prices):
            if prices[right] <= prices[left]:
                left = right
            else:
                maxProfit = max(maxProfit, prices[right] - prices[left])
            right += 1
        return maxProfit