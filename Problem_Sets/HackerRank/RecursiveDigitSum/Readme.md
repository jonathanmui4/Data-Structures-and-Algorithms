# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Iterate through string, convert each character to integer and sum them up, convert sum back to a string and feed it into recursive function call.

# Approach
<!-- Describe your approach to solving the problem. -->
Approach same as intuition. Had to take note of using a long for the sum instead of an int to account for overflow.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through string a few times because function called recursively
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Additional Data Structures used take up constant space
$$O(1)$$