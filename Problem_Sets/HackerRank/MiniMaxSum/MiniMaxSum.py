#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    totalSum = sum(arr)
    return min(totalSum - num for num in arr), max(totalSum - num for num in arr)

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    min_sum, max_sum = miniMaxSum(arr)
    print(f"{min_sum} {max_sum}")
