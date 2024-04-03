# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
For every opening bracket, it needs to be followed by the same closing bracket in that order. Will definitely need to loop through the characters of the string at least once and make some form of comparison. It makes sense to use a stack to store the opening brackets since the first opening bracket needs to be closed the last.

# Approach
<!-- Describe your approach to solving the problem. -->
I first created the stack for the opening brackets. I then iterated through all the characters of the string and ran 2 checks. If the current character is an opening bracket, push it in the stack. If not, it is a closing bracket. I then used a switch case statement to try to match the closing bracket with the top of the stack to ensure the closing bracket gets matched with the correct opening bracket. If a closing bracket is matched to an opening bracket and the opening bracket stack is not empty, the opening bracket is popped from the stack. Otherwise, the function immediately returns false. A final check is then done to see if the stack is empty (i.e if all opening brackets are closed).

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(n)$$