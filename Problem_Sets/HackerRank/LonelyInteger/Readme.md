# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Initial intuition was to use a hashmap to store the number of occurrences each number appears in the array. However this method requires multiple iterations of the array and also has a space complexity of O(n). Decided to use the properties of XOR (bit-wise operation where different bits would return 1 and same bits would cancel each other out and return 0). Because of this property, if the number appears more than once in an array, the bits of that number would eventually cancel each other out. 

# Approach
<!-- Describe your approach to solving the problem. -->
Set the lonely integer as 0 first. Iterate through each number of the array and XOR them with the lonely integer. After finishing the iteration, the lonely integer will be obtained.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterating through array once.
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
No additional space used
$$O(1)$$