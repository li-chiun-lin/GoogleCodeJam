# Problem

You are given a set of distinct integers. You need to separate them into two non-empty subsets such that each element belongs to exactly one of them and the sum of all elements of each subset is the same.

An anonymous tip told us that the problem above was unlikely to be solved in polynomial time (or something like that), so we decided to change it. Now you get to decide what half of the integers are!

This is an interactive problem with three phases.  
In phase 1, you choose $N$ distinct integers.  
In phase 2, you are given another $N$ integers that are distinct from each other and from the ones you chose in phase 1.  
In phase 3, you have to partition those $2N$ integers into two subsets, both of which sum to the same amount. All $2N$ integers are to be between $1$ and $10^9$, inclusive, and it is guaranteed that they sum up to an even number.

## Input and output

This is an interactive problem. You should make sure you have read the information in the Interactive Problems section of our FAQ.

Initially, your program should read a single line containing an integer, $T$, the number of test cases. Then, $T$ test cases must be processed.

For each test case, your program must first read a line containing a single integer $N$. Then, it must output a line containing $N$ distinct integers $A_1,A_2,…,A_N$. Each of these integers must be between $1$ and $10^9$, inclusive. After that, your program must read a line containing $N$ additional integers $B_1,B_2,…,B_N$. Finally, your program must output a line containing between $1$ and $2N−1$ integers from among $A_1,A_2,…,A_N,B_1,B_2,…,B_N$: the ones chosen to be part of the first subset. The integers from $A$ and $B$ that you do not output are considered to be part of the other subset.

The next test case starts immediately if there is one. If this was the last test case, the judge will expect no more output and will send no further input to your program. In addition, all $T$ test cases are always processed, regardless of whether the final output from your program is correct or not.

Note: It can be shown that given the limits for this problem, there exists a sequence $A_1,A_2,…,A_N$ such that any sequence $B_1,B_2,…,B_N$ results in a set of $2N$ integers that can be separated into two subsets with equal sums.

If the judge receives an invalidly formatted or invalid line (like outputting an unexpected number of integers, or integers out of range, or repeated integers in a line) from your program at any moment, the judge will print a single number $−1$ and will not print any further output. If your program continues to wait for the judge after receiving a $−1$, your program will time out, resulting in a Time Limit Exceeded error. Notice that it is your responsibility to have your program exit in time to receive a Wrong Answer judgment instead of a Time Limit Exceeded error. As usual, if the memory limit is exceeded, or your program gets a runtime error, you will receive the appropriate judgment.
