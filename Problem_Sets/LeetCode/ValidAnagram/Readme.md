# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
T is an anagram of s if it is a rearrangement of the exact same letters. Sort both t and s and compare them. If it is the same, return true, else false. 

# Approach
<!-- Describe your approach to solving the problem. -->
This approach, I first check if the 2 strings have the same length. If they do not have the same length, return false. If they do, I run sorting algorithms on both strings and compare them character by character. If any of the characters are different, I return false. 

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(2 * nlg(n) + n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(1)$$