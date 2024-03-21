#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    zeros = 0
    pos = 0
    neg = 0
    for num in arr:
        if num == 0:
            zeros += 1
        elif num < 0:
            neg += 1
        else:
            pos += 1
    print(pos/len(arr))
    print(neg/len(arr))
    print(zeros/len(arr))

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
