# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
If default height of tower is 1, since Player 1 always starts first, he will have no more moves and thus Player 2 wins. Since both players will play optimally, they will always pick the option that reduces the tower height to 1 since tower height is always divisible by 1. Therefore, the winner for tower height > 1 will be determined by the number of towers. If the number of towers is even, player 2 will always have the last move and will therefore be the winner. If the number of towers is odd, player 1 will have the last move and will thus be the winner.

# Approach
<!-- Describe your approach to solving the problem. -->
First bug was in the dual pointer approach. The last pointer should be subtracted incrementally as it is moving toward the middle, not added. The last pointer should also start from index (n - 2) instead of (n - 1) since (n-1) is the last element in the array and has already been swapped withl. The next bug is in the way they calculated the midpoint. Midpoint is Start + (end - start) / 2. 

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Sort once, iterate through half of array once
$$O(n * lg(n) + n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
No additional space used
$$O(1)$$