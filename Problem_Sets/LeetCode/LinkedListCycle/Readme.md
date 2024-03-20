# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Initial intuition is to store the visited nodes in a hashmap, keep going to the next node in the Linked list and checking if that node has been visited before or if the next pointer is null. However, this takes O(n) time and O(n) space. I thus decided to go with the double pointer (tortoise and hare) approach which will also run in O(n) time but O(1) space.

# Approach
<!-- Describe your approach to solving the problem. -->
Using a slow pointer that only accesses the next node and a fast pointer that accesses a node 2 nodes from the current node, if the 2 nodes point at the same node after more than 1 iteration, there is a cycle. If the fast pointer points at null (because it is ahead of the slow), it means the list has no cycle. 


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Worse case, each node visited once
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Space complexity is recursion call stack which is height of tree.
$$O(1)$$