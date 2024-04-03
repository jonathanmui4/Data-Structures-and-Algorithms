# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Stacks are LIFO while queues are FIFO. We will need 2 stacks: 1 for data input and 1 for output. A push operation would push the new element into the first stack. A pop operation would first perform a check if the output stack is empty. If it is indeed empty, the elements in the input stack would be popped 1 by 1 and pushed into the output stack, thereby reversing the order of the input stack. The element would then be popped and returned from the output stack. Peeking the top element would be a similar process without popping the element from the output stack. Checking if the queue is empty would involve checking if both stacks are empty. In conclusion the order of elements of the queue would be like this: output stack -> input stack

# Approach
<!-- Describe your approach to solving the problem. -->


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
When reversals happen
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
N because n elements are spread across 2 stacks
$$O(n)$$