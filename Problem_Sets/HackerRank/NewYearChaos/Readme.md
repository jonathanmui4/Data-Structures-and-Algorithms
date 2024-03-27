# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Iteration problem.


# Approach
<!-- Describe your approach to solving the problem. -->
Iterate through array. First check if the difference between current number and index is greater than 2. If so, immediately print "too chaotic" and stop the function. Otherwise, iterate from the legal bribing position (2 in front of current) to the current position and check if there are any numbers bigger than your current number. If there are, a bribe happened and add that to the sum.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through array
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Additional Data Structures used take up constant space
$$O(1)$$