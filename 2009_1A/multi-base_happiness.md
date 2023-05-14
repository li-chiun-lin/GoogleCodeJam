# Problem

Given an integer N, replace it by the sum of the squares of its digits. A happy number is a number where, if you apply this process repeatedly, it eventually results in the number 1. For example, if you start with 82:

8*8 + 2*2       = 64 + 4    = 68,  repeat:
6*6 + 8*8       = 36 + 64   = 100, repeat:
1*1 + 0*0 + 0*0 = 1 + 0 + 0 = 1 (happy! :)

Since this process resulted in 1, 82 is a happy number.

Notice that a number might be happy in some bases, but not happy in others. For instance, the base 10 number 82 is not a happy number when written in base 3 (as 10001).

You are one of the world's top number detectives. Some of the bases got together (yes, they are organized!) and hired you for an important task: find out what's the smallest integer number that's greater than 1 and is happy in all the given bases.

## Input

The first line of input gives the number of cases T. T test cases follow. Each case consists of a single line. Each line contains a space separated list of distinct integers, representing the bases. The list of bases is always in increasing order.
