# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Calculating backwards from the nth step, there is only 1 method from the (n-1)th step to the nth step, and there is only 1 method from the nth step to the nth step. From the (n-2)nd step, there are 2 ways to reach the nth step. 2 happens to be the summation of 1 + 1, the number of steps to get to the nth step from the previous 2 steps. We can then split this into smaller problems, constantly summing the number of steps from the previous 2 steps to find the number of ways to reach the nth step from the next step. This is iteratively done (n - 1) times because n starts from the (n-1)th step and keeps shifting forward by one.

# Approach
<!-- Describe your approach to solving the problem. -->
Using 2 pointers, one points at the step if 2 steps are taken and another points at the step if 1 step are taken. From these places, calculate the number of steps it takes to get to the nth step from the current step the pointer is pointing at. Keep shifting each pointer closer to the start point, updating the total number of ways by summing the values of the 2 pointers. The total number of ways can be obtained once the first pointer reaches the 0th step. 

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through number of steps
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
No data structure used
$$O(1)$$