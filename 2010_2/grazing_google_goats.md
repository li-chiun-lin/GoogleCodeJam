# Problem

Farmer John has recently acquired a nice herd of N goats for his field. Each goat i will be tied to a pole at some position Pi using a rope of length Li. This means that the goat will be able to travel anywhere in the field that is within distance Li of the point Pi, but nowhere else. (The field is large and flat, so you can think of it as an infinite two-dimensional plane.)

Farmer John already has the pole positions picked out from his last herd of goats, but he has to choose the rope lengths. There are two factors that make this decision tricky:

    The goats all need to be able to reach a single water bucket. Farmer John has not yet decided where to place this bucket. He has reduced the choice to a set of positions {Q1, Q2, ..., QM}, but he is not sure which one to use.
    The goats are ill-tempered, and when they get together, they sometimes get in noisy fights. For everyone's peace of mind, Farmer John wants to minimize the area A that can be reached by all the goats.

Unfortunately, Farmer John is not very good at geometry, and he needs your help for this part!

For each bucket position Qj, you should choose rope lengths so as to minimize the area Aj that can be reached by every goat when the bucket is located at position Qj. You should then calculate each of these areas Aj.
Example

In the picture below, there are four blue points, corresponding to the pole positions: P1, P2, P3, and P4. There are also two red points, corresponding to the potential bucket positions: Q1 and Q2. You need to calculate A1 and A2, the areas of the two shaded regions.







## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integers N and M.

The next N lines contain the positions P1, P2, ..., PN, one per line. This is followed by M lines, containing the positions Q1, Q2, ..., QM, one per line.

Each of these N + M lines contains the corresponding position's x and y coordinates, separated by a single space.
