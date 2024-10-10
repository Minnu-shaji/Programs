#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def getTotalX(a, b):
    # Write your code here
    def div(i,k):
        if k%i==0:
            return True
        return False
    b=sorted(b)
    c=0
    k=b[0]
    f=[]
    for i range(2,k//2+1):
        if div(i,k):
            f1=1
            for j in a:
                if not div(j,i):
                    f1=0
                    break
            f2=1
            if f1==1:
                for l in b:
                    if not div(i,l):
                        f2=0
                        break
            if f1==1 and f2==1:
                c+=1
    return c
             