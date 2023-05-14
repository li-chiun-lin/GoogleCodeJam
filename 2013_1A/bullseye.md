# Problem

Maria has been hired by the Ghastly Chemicals Junkies (GCJ) company to help them manufacture bullseyes. A bullseye consists of a number of concentric rings (rings that are centered at the same point), and it usually represents an archery target. GCJ is interested in manufacturing black-and-white bullseyes.

Maria starts with $t$ millilitres of black paint, which she will use to draw rings of thickness $1$ cm (one centimetre). A ring of thickness $1$ cm is the space between two concentric circles whose radii differ by $1$ cm.

Maria draws the first black ring around a white circle of radius $r$ cm. Then she repeats the following process for as long as she has enough paint to do so:

1. Maria imagines a white ring of thickness $1$ cm around the last black ring.
1. Then she draws a new black ring of thickness $1$ cm around that white ring.

Note that each "white ring" is simply the space between two black rings.

The area of a disk with radius $1$ cm is $π$ cm$^2$. One millilitre of paint is required to cover area $π$ cm$^2$. What is the maximum number of black rings that Maria can draw? Please note that:

- Maria only draws complete rings. If the remaining paint is not enough to draw a complete black ring, she stops painting immediately.
- There will always be enough paint to draw at least one black ring.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
Each test case consists of a line containing two space separated integers: $r$ and $t$.

## Solution

For the $k$-th ring: $(r + 2k - 1)^2 - (r + 2k - 2)^2 = 2r + 4k - 3$.

For the sum of the first $k$-ring: $\Sigma_{i=1}^k{(2r + 4i - 3)} = 2k^2 + (2r - 1)k$.
