# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Just iterating through both linked lists using pointers, comparing each item, see which one is smaller and append the smaller item to a new combined sorted list. Function will then return this combined list.

# Approach
<!-- Describe your approach to solving the problem. -->
I implemented a while loop that compares the pointer of list 1 and list 2. The smaller value is appended to the combined list. If the smaller value is from list 1, the pointer in list 1 would iterate to the next element, same for list 2. This comparison continues until 1 of the lists has been completely iterated through. The remaining elements in the list that hasn't been iterated through is then appended to the combined list.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(n + m)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(n + m)$$