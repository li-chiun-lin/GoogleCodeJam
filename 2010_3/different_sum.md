# Problem

We have come up with a wonderful problem for Google Code Jam 2010 that involves contestants solving a cryptarithm. But we need your help in creating testcases for the problem; more precisely, we're concerned with addition equations that are good enough (in the sense defined below) for conversion into cryptarithms.

You don't need to know what a cryptarithm is to solve this problem, as we'll provide all required definitions. We define a cryptarithm equation to be an addition equation written in such a way that all summands (numbers being added) and the sum are aligned to the same right border like this:

124
 31
 25
---
180

Additionally, for each column of a cryptarithm equation, all digits of the summands in that column must be different. Note that we don't include the sum in this constraint. So for example in the above equation the first column contains only digit 1, the second column contains digits 2,3 and 2, and the third column contains digits 4, 1 and 5. This equation is not a cryptarithm equation since the second column contains two 2's. However, it would be a cryptarithm equation if we replaced the last summand with 15 (and the sum with 170).

Note that summands in a cryptarithm equation are always positive and written without leading zeros. The order of summands is not important (in other words, two equations which differ only in the order of the summands are considered the same).

The example above was in base 10, but we're also interested in cryptarithm equations in other bases. Note that a "digit" in base b could mean any integer between 0 and b-1. Here is a cryptarithm equation in base 23:

 I7B
 JJJ
----
1F47

In this example, "I" stands for digit 18, "B" stands for digit 11, "J" stands for digit 19, and "F" stands for digit 15. In decimal notation, the two summands are 18*232 + 7*23 + 11 = 9694 and 19*232 + 19*23 + 19 = 10507, and the sum is 1*233 + 15*232 + 4*23 + 7 = 20201. Please note that denoting digits of 10 and more with letters was done purely for the clarity of the example; it doesn't really matter in this problem how exactly we denote such digits in writing.

How many cryptarithm equations are there with the given sum N in the given base B?

Since the answer might be very large, please output it modulo 1000000007.

## Input

The first line of the input gives the number of test cases, T. T lines follow. Each contains two positive integers N and B. All input numbers are given in base 10.
