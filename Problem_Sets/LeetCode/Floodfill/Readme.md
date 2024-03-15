# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This problem involves finding out if the neighbours (specifically 4 direction neighbours, i.e. all pixels connected to a pixel touching the edge of the starting pixel) is the same colour. It is thus a search problem. Likely going with Depth First Search as it is more memory efficient with less overhead. 

# Approach
<!-- Describe your approach to solving the problem. -->
This is just a simple depth first search of all neighbouring elements (top, bottom, left and right) of the starting pixel that has the same colour and changing the colour.


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(N * M)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(N * M)$$