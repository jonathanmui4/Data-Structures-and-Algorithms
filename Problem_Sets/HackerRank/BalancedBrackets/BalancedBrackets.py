#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'isBalanced' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def isBalanced(s):
    # Write your code here
    openBrackets = []
    closeBrackets = {')': '(', ']': '[', '}': '{'}
    for char in s:
        if char in closeBrackets:
            if openBrackets and openBrackets[-1] == closeBrackets[char]:
                openBrackets.pop()
            else:
                return "NO"
        else:
            openBrackets.append(char)
    return "YES" if not openBrackets else "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        s = input()

        result = isBalanced(s)

        fptr.write(result + '\n')

    fptr.close()
