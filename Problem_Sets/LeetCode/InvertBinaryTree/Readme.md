# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
For every tree node, look at the children, swap the left and right.

# Approach
<!-- Describe your approach to solving the problem. -->
By nature of the tree, each node at some point is a root node. Thus, we just need to perform the swapping of children nodes recursively. Since we are going deeper and deeper into the tree, it is a DFS.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(lg(n))$$ because function visits each node once and height of tree determines how many nodes function visits.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(lg(n))$$ because function uses recursive call stack and deepest level of recursion is equal to height of tree.