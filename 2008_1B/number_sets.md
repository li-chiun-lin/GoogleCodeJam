# Problem

You start with a sequence of consecutive integers. You want to group them into sets.

You are given the interval, and an integer P. Initially, each number in the interval is in its own set.

Then you consider each pair of integers in the interval. If the two integers share a prime factor which is at least P, then you merge the two sets to which the two integers belong.

How many different sets there will be at the end of this process?

## Input

One line containing an integer C, the number of test cases in the input file.

For each test case, there will be one line containing three single-space-separated integers A, B, and P. A and B are the first and last integers in the interval, and P is the number as described above.
