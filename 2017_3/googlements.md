# Problem

Chemists work with periodic table elements, but here at Code Jam, we have been using our advanced number smasher to study googlements. A googlement is a substance that can be represented by a string of at most nine digits. A googlement of length L must contain only decimal digits in the range 0 through L, inclusive, and it must contain at least one digit greater than 0. Leading zeroes are allowed. For example, 103 and 001 are valid googlements of length 3. 400 (which contains a digit, 4, greater than the length of the googlement, 3) and 000 (which contains no digit greater than 0) are not.

Any valid googlement can appear in the world at any time, but it will eventually decay into another googlement in a deterministic way, as follows. For a googlement of length L, count the number of 1s in the googlement (which could be 0) and write down that value, then count the number of 2s in the googlement (which could be 0) and write down that value to the right of the previous value, and so on, until you finally count and write down the number of Ls. The new string generated in this way represents the new googlement, and it will also have length L. It is even possible for a googlement to decay into itself!

For example, suppose that the googlement 0414 has just appeared. This has one 1, zero 2s, zero 3s, and two 4s, so it will decay into the googlement 1002. This has one 1, one 2, zero 3s, and zero 4s, so it will decay into 1100, which will decay into 2000, which will decay into 0100, which will decay into 1000, which will continuously decay into itself.

You have just observed a googlement G. This googlement might have just appeared in the world, or it might be the result of one or more decay steps. What is the total number of possible googlements it could have been when it originally appeared in the world?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with a string G, representing a googlement.
