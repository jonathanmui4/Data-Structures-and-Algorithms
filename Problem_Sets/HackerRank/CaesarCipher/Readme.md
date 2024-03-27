# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Iterate through the string, for each character, add k to it unless it's the last k characters of the alphabet, then loop it back to the first few letters of the alphabet after adding. To achieve the looping 

# Approach
<!-- Describe your approach to solving the problem. -->
I first set the lower bound threshold for both upper case and lower case alphabets with the ASCII numbers of 'A' and 'a'. It is also known that there are 26 alphabets so this is the number we need to modulo by to loop back to any numbers between 0 to 25 (The number we need to add if k exceeds the boundary of the number of alphabets). Iterating through each character of the string, we first check if the letter is upper or lower case before adding the cipher to it, subtracting the lower bound ASCII number from it so we can count which alphabet it is. We then modulo this number to find the final number to add to 'A' or 'a' to get the final character.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through array once
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Additional string used to hold ciphered string.
$$O(n)$$