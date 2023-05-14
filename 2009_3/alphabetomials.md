# Problem

As we all know, there is a big difference between polynomials of degree 4 and those of degree 5. The question of the non-existence of a closed formula for the roots of general degree 5 polynomials produced the famous Galois theory, which, as far as the author sees, bears no relation to our problem here.

We consider only the multi-variable polynomials of degree up to 4, over 26 variables, represented by the set of 26 lowercase English letters. Here is one such polynomial:

aber+aab+c

Given a string s, we evaluate the polynomial on it. The evaluation gives p(S) as follows: Each variable is substituted with the number of appearances of that letter in S.
For example, take the polynomial above, and let S = "abracadabra edgar". There are six a's, two b's, one c, one e, and three r's. So

p(S) = 6 * 2 * 1 * 3 + 6 * 6 * 2 + 1 = 109.

Given a dictionary of distinct words that consist of only lower case letters, we call a string S a d-phrase if

S = "S1 S2 S3 ... Sd",

where Si is any word in the dictionary, for 1 ≤ i ≤ d. i.e., S is in the form of d dictionary words separated with spaces. Given a number K ≤ 10, your task is, for each 1≤ d ≤ K, to compute the sum of p(S) over all the d-phrases. Since the answers might be big, you are asked to compute the remainder when the answer is divided by 10009.

## Input

The first line contains the number of cases T. T test cases follow. The format of each test case is:
A line containing an expression p for the multi-variable polynomial, as described below in this section, then a space, then follows an integer K.
A line with an integer n, the number of words in the dictionary.
Then n lines, each with a word, consists of only lower case letters. No word will be repeated in the same test case.

We always write a polynomial in the form of a sum of terms; each term is a product of variables. We write at simply as t a's concatenated together. For example, a2b is written as aab. Variables in each term are always lexicographically non-decreasing.
