"""
Problem: Compare the Triplets
Link: https://www.hackerrank.com/challenges/compare-the-triplets/problem
Author: Emmanouilidis Konstantinos
"""

import math
import os
import random
import re
import sys

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    score = [0,0]
    i = 0
    for i in range(len(a)):
        if(a[i]<b[i]):
            score[1] += 1
        elif a[i]>b[i]:
            score[0] += 1
        else:
            i +=1
    return(score)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
