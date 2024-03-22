# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This problem just tests string operations and making use of library functions

# Approach
<!-- Describe your approach to solving the problem. -->
Convert the hours substring of the time string to an int, find the PM,AM substring too. If it is pm, add 12 to the hours. Convert the int back to a string with proper format.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through entire array twice
$$O(2n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Just variables independent of array size.
$$O(1)$$