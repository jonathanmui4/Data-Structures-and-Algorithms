class Solution:
    def climbStairs(self, n: int) -> int:
        oneStep, twoStep = 1, 1
        for i in range(n-1):
            temp = oneStep
            oneStep = temp + twoStep
            twoStep = temp
        return oneStep