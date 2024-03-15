# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This problem involves finding the Lowest Common Ancestor of a Binary Search tree, a data structure where the left node is smaller than parent and right node is larger than parent. In order to find the Lowest Common Ancestor, of 2 nodes, I would need to traverse down the tree from the root of the tree with dfs. If both nodes are less than the root node, search down the left subtree. If both nodes are greater than the root node, search down the right subtree. If one node is greater and one node is smaller than the root node, the root node is the LCA.

# Approach
<!-- Describe your approach to solving the problem. -->
This is just a simple depth first search of all neighbouring elements (top, bottom, left and right) of the starting pixel that has the same colour and changing the colour.


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(lg(n))$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(1)$$