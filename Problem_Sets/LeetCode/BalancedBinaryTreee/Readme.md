# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This is a recursion problem and we need to continually check if the left and right subtree are balanced. While performing the checks, the function can return the height of the subtree checked. We start checking from the leaf node (the base case is the furthest leaf node because they have no children and are thus balanced) and go further up the tree till we reach the root.

# Approach
<!-- Describe your approach to solving the problem. -->
I created a separate function to calculate the height of the subtree which is the height of the current node. If the current node has no children, height is 1. If the current node is null, height is 0. If the tree is unbalanced, I'll manually set the height of the current node to -1. The home function now just has to check if the height at the current node is less than 0. If it is, the tree is not balanced. Else, the tree is balanced.


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Worse case, each node visited once
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Space complexity is recursion call stack which is height of tree.
$$O(lg(n))$$