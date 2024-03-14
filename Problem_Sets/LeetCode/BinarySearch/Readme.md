# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Implement Binary Search on the array since it is already sorted. 

# Approach
<!-- Describe your approach to solving the problem. -->
Did the iterative approach. The while loop checks if left is lesser or equal to right because if array has only 1 element, both left and right and midpoint is pointing to the same element and it still needs to be checked. Next, calculate the midpoint. Difference between (right - left)/2 will give you the distance from right index or left index to the midpoint. Thus, midpoint is calculated from left + (right - left)/2. Lastly, we perform the checks to search, comparing the target with the number at the midpoint, if it is equal, return index at midpoint, if it is larger than target, we set the right index to point to 1 less than the midpoint and search again. If it is smaller than target, we set the left index to point to 1 more than the midpoint and search again.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(lg(n))$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(n)$$