# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Initial intuition was to sort the array first but that is actually less efficient. We could just iterate through the array twice, first to find the total sum of every element. The second iteration would find the sum of 4/5 elements. Comparing these values with the existing variables storing the max and min sums would help determine the final max and min sums

# Approach
<!-- Describe your approach to solving the problem. -->
Use 3 variables to keep track of the 3 counts.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through entire array twice
$$O(2n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Just variables independent of array size.
$$O(1)$$