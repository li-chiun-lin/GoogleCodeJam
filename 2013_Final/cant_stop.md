# Problem

This problem was inspired by a board game called Can't Stop, designed by Sid Sackson. This problem has a similar idea, but does not assume you have played Can't Stop.

You're playing a (very large) board game. In this game, you're given a sequence of N roll sets. Each roll set consists of D die rolls. Each die roll is an integer.

To win the game, you have to find the largest totally awesome interval of the sequence. An interval is any consecutive sequence of roll sets. An interval is called totally awesome if there exist k numbers such that every roll set in the interval contains at least one of those k numbers.

For example, suppose D=2 and k=3, and the roll sets are as follows:

Set 0: 10 20
Set 1: 50 60
Set 2: 70 30
Set 3: 40 40
Set 4: 30 30
Set 5: 20 40

The interval from Set 0 to Set 2 is totally awesome because roll sets 0-2 all contain 10, 50 or 70. The interval from Set 1 to Set 5 is totally awesome because roll sets 1-5 all contain 50, 30 or 40. That interval contains 5 roll sets, and it is the largest totally awesome interval.

Your job is to output the indices of the first and last roll set in the longest totally awesome interval. If there are multiple totally awesome intervals of that length, output the indices for the one with the lowest first index. Note that the first roll set has index 0.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with three space-separated integers: N, D and k, as described above. On the next line, there will be N*D integers. The first D integers will be the rolls from the first roll set; the second D integers will be the rolls from the second roll set; and so on.
