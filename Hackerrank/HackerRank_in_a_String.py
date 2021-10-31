"""
Problem: HackerRank in a String!
Link: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

Author: Emmanouilidis Konstantinos
"""

import math
import os
import random
import re
import sys

def hackerrankInString(s):
    a = "hackerrank"
    index = 0
    for i in range(len(a)):
        flag = 0
        for j in range(index,len(s)):
            if(a[i]==s[j]):
                index = j+1
                flag = 1
                break
        if(not flag):
            break
    if(flag):
        return("YES")
    return("NO")

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = hackerrankInString(s)

        fptr.write(result + '\n')

    fptr.close()
