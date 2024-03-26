# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This question requires us to debug a solution that they already coded out. 

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