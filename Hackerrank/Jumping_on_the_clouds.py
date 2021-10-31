"""
Problem: Jumping on the Clouds
Link: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
Author: Emmanouilidis Konstantinos
"""

import math
import os
import random
import re
import sys


def jumpingOnClouds(c):
    count = 0
    i = 0
    while(i<(len(c)-2)):
        
        
        if(c[i+2]==0):
            i = i+1
            count += 1
        elif(c[i+1]==0):
            count += 1
        i += 1
    if(i==len(c)-2):
        count += 1
    return(count)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()
