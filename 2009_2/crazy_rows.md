# Problem

You are given an N x N matrix with 0 and 1 values. You can swap any two adjacent rows of the matrix.

Your goal is to have all the 1 values in the matrix below or on the main diagonal. That is, for each X where 1 ≤ X ≤ N, there must be no 1 values in row X that are to the right of column X.

Return the minimum number of row swaps you need to achieve the goal.

## Input

The first line of input gives the number of cases, T. T test cases follow.
The first line of each test case has one integer, N. Each of the next N lines contains N characters. Each character is either 0 or 1.
