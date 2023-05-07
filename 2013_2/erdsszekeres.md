# Problem

Given a list X, consisting of the numbers (1, 2, ..., N), an increasing subsequence is a subset of these numbers which appears in increasing order, and a decreasing subsequence is a subset of those numbers which appears in decreasing order. For example, (5, 7, 8) is an increasing subsequence of (4, 5, 3, 7, 6, 2, 8, 1).

Nearly 80 years ago, two mathematicians, Paul Erdős and George Szekeres proved a famous result: X is guaranteed to have either an increasing subsequence of length at least sqrt(N) or a decreasing subsequence of length of at least sqrt(N). For example, (4, 5, 3, 7, 6, 2, 8, 1) has a decreasing subsequence of length 4: (5, 3, 2, 1).

I am teaching a combinatorics class, and I want to "prove" this theorem to my class by example. For every number X[i] in the sequence, I will calculate two values:

    A[i]: The length of the longest increasing subsequence of X that includes X[i] as its largest number.
    B[i]: The length of the longest decreasing subsequence of X that includes X[i] as its largest number.

The key part of my proof will be that the pair (A[i], B[i]) is different for every i, and this implies that either A[i] or B[i] must be at least sqrt(N) for some i. For the sequence listed above, here are all the values of A[i] and B[i]:

|  i  |  X[i]  |  A[i]  |  B[i] |
|-----|--------|--------|--------|
|  0  |   4    |   1    |   4|
|  1  |   5    |   2    |   4|
|  2  |   3    |   1    |   3|
|  3  |   7    |   3    |   4|
|  4  |   6    |   3    |   3|
|  5  |   2    |   1    |   2|
|  6  |   8    |   4    |   2|
|  7  |   1    |   1    |   1|

I came up with a really interesting sequence to demonstrate this fact with, and I calculated A[i] and B[i] for every i, but then I forgot what my original sequence was. Given A[i] and B[i], can you help me reconstruct X?

X should consist of the numbers (1, 2, ..., N) in some order, and if there are multiple sequences possible, you should choose the one that is lexicographically smallest. This means that X[0] should be as small as possible, and if there are still multiple solutions, then X[1] should be as small as possible, and so on.

## Input

The first line of the input gives the number of test cases, T. T test cases follow, each consisting of three lines.

The first line of each test case contains a single integer N. The second line contains N positive integers separated by spaces, representing A[0], A[1], ..., A[N-1]. The third line also contains N positive integers separated by spaces, representing B[0], B[1], ..., B[N-1].
