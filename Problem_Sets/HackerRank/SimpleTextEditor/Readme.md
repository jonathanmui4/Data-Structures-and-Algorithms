# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This problem tests string operations

# Approach
<!-- Describe your approach to solving the problem. -->
Based on the type of operation, modify the string accordingly. Also create a stack that can easily store the previous states and pop off the previous states when an undo operation is called.


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through each operation
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Number of previous states stored is proportional to number of operations
$$O(n)$$