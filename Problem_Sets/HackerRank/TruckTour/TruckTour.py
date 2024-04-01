#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'truckTour' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY petrolpumps as parameter.
#

def truckTour(petrolpumps):
    # Write your code here
    start, remPetrol = 0, 0
    for i in range(len(petrolpumps)):
        petrol, dist = petrolpumps[i]
        remPetrol += petrol - dist
        if remPetrol < 0:
            start = i + 1
            remPetrol = 0
    return start

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    petrolpumps = []

    for _ in range(n):
        petrolpumps.append(list(map(int, input().rstrip().split())))

    result = truckTour(petrolpumps)

    fptr.write(str(result) + '\n')

    fptr.close()
