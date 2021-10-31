"""
Problem: Repeated String
Link: https://www.hackerrank.com/challenges/repeated-string/problem
Author: Emmanouilidis Konstantinos
"""

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    count = 0
    for i in range(len(s)):
        if(s[i]=='a'):
            count += 1
    
    div_ans = n // len(s)
    mod_ans = n % len(s)
    count = div_ans * count
    for i in range(mod_ans):
        if(s[i]=='a'):
            count += 1
    return(count)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
