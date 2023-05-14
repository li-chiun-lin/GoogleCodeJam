# Problem

You need to hire some people to paint a fence. The fence is composed of 10000 contiguous sections, numbered from 1 to 10000.

You get some offers from painters to help paint the fence. Each painter offers to paint a contiguous subset of fence sections in a particular color. You need to accept a set of the offers, such that:

    Each section of the fence is painted.
    At most 3 colors are used to paint the fence.

If it is possible to satisfy these two requirements, find the minimum number of offers that you must accept.

## Input

    One line containing an integer T, the number of test cases in the input file.

For each test case, there will be:

    One line containing an integer N, the number of offers.
    N lines, one for each offer, each containing "C A B" where C is the color, which is an uppercase string of up to 10 letters, A is the first section and B is the last section to be painted. 1 ≤ A ≤ B ≤ 10000.
