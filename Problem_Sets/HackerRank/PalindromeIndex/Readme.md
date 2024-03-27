# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Double pointer, 1 at the front and 1 at the back. Compare each alpha numeric character and shift the pointers toward the middle of the string if both characters are equal. 

# Approach
<!-- Describe your approach to solving the problem. -->
If left pointer is less than right, keep doing the comparison iteration. The comparison iteration consists of another check which sees if the character being pointed at is alpha numeric. Once this check is passed, the character of each pointer (in lower case) is compared to see if they are equal. If they are not equal check if the next 2 subsequent letters are equal to the current one being pointed to by the other pointer. If they are equal, it means a palindrome can be formed from removing the current index. If the while loop is exited, it means all characters are equal and string is a palindrome.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through string one
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
No additional data structures used
$$O(1)$$