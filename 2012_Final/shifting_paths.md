# Problem

You have been walking in the woods for hours, and you want to go home.

The woods contain N clearings labeled 1, 2, ..., N. You are now at clearing 1, and you must reach clearing N in order to leave the woods. Each clearing from 1 to N-1 has a left path and a right path leading out to other clearings, as well as some number of one-way paths leading in. Unfortunately, the woods are haunted, and any time you enter a clearing, one of the two outgoing paths will be blocked by shifty trees. More precisely, on your kth visit to any single clearing:

-  You must leave along the left path if k is odd.
-  You must leave along the right path if k is even.
-  All paths are one-way, so you have no choice at each step: you must go forward through the one unblocked outgoing path. 

So the first time you are in clearing #1, you will leave along the left path. If you ever come back to clearing #1 for a second time, you would leave along the right path; the third time, you'd leave along the left path again; and so on.

You begin at clearing #1, and when you get to clearing #N, you can leave the woods. How many paths do you need to follow before you get out?

## Input

The first line of the input gives the number of test cases, T. T test cases follow, each beginning with a line containing a single integer N.

N-1 lines follow, each containing two integers Li and Ri. Here, Li represents the clearing you would end up at if you follow the left path out of clearing i, and Ri represents the clearing you would end up at if you follow the right path out of clearing i.

No paths are specified for clearing N because once you get there, you are finished.
