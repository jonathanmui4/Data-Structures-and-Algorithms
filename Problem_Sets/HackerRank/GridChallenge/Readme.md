# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Super slow approach

# Approach
<!-- Describe your approach to solving the problem. -->
Sorted each individual string first, then compared each character of each string, ensuring that the one from row-1 is smaller than the character in row.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through array of strings, sort each string. Iterate through strings again, comparing each character of each string.
$$O(n^2 + n*lg(n))$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
No additional data structures used
$$O(1)$$