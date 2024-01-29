# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
I minimally need to iterate through the entire array, comparing each element with future elements to find larger numbers. This can be done with 2 pointers. Left pointer, points where we buy and right pointer points where we sell. We also need a separate variable to store the current max profit as we iterate through the array. This variable gets updated everytime a higher max profit is calculated.

# Approach
<!-- Describe your approach to solving the problem. -->
If right pointer value is less than left, point the left pointer on where the right pointer is pointing and point the right pointer to the next element in the array. If right pointer value is more than left, calculate the difference and store it in max profit if it is more than the existing max profit. Repeat until right pointer points at null.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(1)$$