# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
I was trying to avoid the O(n^2) solution of doing a nested for loop. I decided to make use of the hints of sacrificing the space complexity and transferring the array to a hashmap

# Approach
<!-- Describe your approach to solving the problem. -->
I first shifted every element of the array into a hashmap. I then went through the array again, calculated the complement of each element and tried to find if the complement exists in the hashmap. 

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(n)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(n)$$