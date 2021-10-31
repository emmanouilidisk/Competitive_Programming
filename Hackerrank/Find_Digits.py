"""
Problem: Find Digits
Link: https://www.hackerrank.com/challenges/find-digits/problem
Author: Emmanouilidis Konstantinos
"""

import math
import os
import random
import re
import sys


def findDigits(n):
    counter = 0
    j = 0
    for i in str(n):
        if int(i) == 0:
            j += 1
        else:
            if (n % int(i) == 0):
                counter += 1
    return counter
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
