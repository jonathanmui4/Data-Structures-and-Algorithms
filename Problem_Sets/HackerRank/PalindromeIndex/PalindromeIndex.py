#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'palindromeIndex' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def palindromeIndex(s):
    # Write your code here
    left = 0
    right = len(s) - 1
    
    while left <= right:
        while left < right and not s[left].isalnum():
            left += 1
        while left < right and not s[right].isalnum():
            right -= 1
        if (s[left] != s[right]):
            if (s[left] == s[right - 1] and s[left + 1] == s[right - 2]):
                return right
            elif (s[right] == s[left + 1] and s[right - 1] == s[left + 2]):
                return left
        left += 1
        right -= 1
    return -1
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = palindromeIndex(s)

        fptr.write(str(result) + '\n')

    fptr.close()
