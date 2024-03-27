#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'caesarCipher' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. INTEGER k
#

def caesarCipher(s, k):
    # Write your code here
    result = ''
    offset_upper = ord('A')
    offset_lower = ord('a')
    no_alphabets = 26
    
    for char in s:
        if not char.isalpha():
            result += char
            continue
        if char.isupper():
            new_char = chr((ord(char) + k - offset_upper) % no_alphabets + offset_upper)
        else:
            new_char = chr((ord(char) + k - offset_lower) % no_alphabets + offset_lower)
        result += new_char
    return result        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = input()

    k = int(input().strip())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()
