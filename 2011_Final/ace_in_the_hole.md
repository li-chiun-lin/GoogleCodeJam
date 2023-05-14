# Problem

Amy has a deck of N cards with values 1 through N. She arranges the deck so that the values of the cards have no decreasing subsequence of length 3. For example, 1, 5, 4, 6, 3, 2 would be an illegal ordering because 5, 3, 2 is decreasing.

Amy now gives the deck of cards to Ben. Ben knows that the deck has no decreasing subsequence of length 3, but he does not know the exact ordering. He wants to find the card with value 1. He does this by choosing an arbitrary card, picking it up to observe its value, and then repeating until he has found the card with value 1. At each step, Ben chooses a card that will minimize the worst-case number of cards he has to examine.

Ben later tells you that he got unlucky and had to examine all N cards before finding the card with value 1. Given the order in which he examined the cards of the deck, what value did each card have? If there are multiple possibilities, choose the lexicographically greatest one.

A deck A is lexicographically greater than a deck B if and only if, at the first index at which they differ, the card in A has a value greater than the value of the card in B.

Example: N = 3, and Ben tried the cards in order 2, 1, 3 (the indices are 1-based). The values of the cards must have been: 2, 3, 1.

Explanation: If card #2 had value 1, then Ben would have stopped immediately. If card #2 had value 2, then Ben would have known the first card must have been the 1, because the ordering (3, 2, 1) is a decreasing subsequence of length 3, and thus could not have been the ordering. In either case, Ben would not have needed 3 guesses. Therefore, we can deduce card #2 have had value 3. Similarly, card #1 could not have had value 1, or Ben could have stopped early. Therefore, the card values must have been 2, 3, 1.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing one integer N, the number of cards in the deck. The next line will contain N integers separated by single spaces, describing the order in which Ben examined the deck: the first integer denotes the 1-based position of the first card he examined, the second integer denotes the 1-based position of the second card he examined, and so on.
