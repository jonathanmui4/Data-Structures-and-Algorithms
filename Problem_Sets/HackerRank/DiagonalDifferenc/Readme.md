# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Getting the sum of the 2 diagonals involves just iterating through the 1 dimension of the 2D array and getting element a[i][i]. Getting the other element starts from a[arr.size() - 1][i].

# Approach
<!-- Describe your approach to solving the problem. -->
Iterate through the array once, update the sums and return the absolute difference of the 2 sums.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterating through array once.
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
No additional space used
$$O(1)$$