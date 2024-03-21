# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Count the number of alphabets occurences in the magazine. Check the ransom note and see if the number of each letter matches.

# Approach
<!-- Describe your approach to solving the problem. -->
I created an array with 26 slots since there are 26 characters. I first iterated through every character in the magazine, adding the number of occurences of each letter in the array. I then iterated through the ransomNote and check if for each character, the count in the letters array is already 0. If it is, then the ransomNote cannot be constructed from the magazine. Else, I would -1 from the count of that character in the letters array. If the iteration through each character of the ransomNote completes, it means that the magazine contains every letter the ransomNote has and the function returns true.


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Iterate through number of letters in both strings
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Array of letters has fixed length of 26
$$O(1)$$