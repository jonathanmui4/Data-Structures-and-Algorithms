# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Problem involves finding the first version number that goes bad, minimising the number of times you check if a version is bad (the API call: isBadVersion()). This seems like a recursive Binary Search problem where you constantly break the array into 2. If it returns a bad version, search left, else search right.

# Approach
<!-- Describe your approach to solving the problem. -->
Maintain 3 integers, the first and last index of the search space and the last lowest bad version of the project. Iterate between the search space, for each iteration, calculate the midpoint and call the API to determine if the version at midpoint is bad. If the version at midpoint is bad, record that version as the lowest bad version and set the last index of the search space to the current midpoint - 1. If the version at midpoint is good, set the start index of the search space to the current midpoint + 1. 


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
For binary search
$$O(lg(n))$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
All 3 integers, first, last and last lowest bad version are all independent of n.
$$O(1)$$