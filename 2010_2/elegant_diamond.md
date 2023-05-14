# Problem

The king has hired you to make him an elegant diamond. An elegant diamond is a two-dimensional object made out of digits that's symmetric about a horizontal and a vertical axis. For example, the following four shapes are elegant diamonds:

```text
   2       8      3     7
  3 3     8 8    2 2
 4 1 4     8      3
  3 3
   2
```

These three shapes are diamonds, but are not elegant:

```text
  2       1        3
 1 1     1 2      1 1
  1     1 1 1    3 1 3
         2 1      1 1
          1        2
```

These three shapes are not diamonds:

```text
  1     2     8   8
 1 1   222      0
        2     00000
```

The king will start by giving you a diamond, which may not be elegant. Your job is to make it elegant by enhancing it, adding digits on to make a bigger diamond. Because you don't want to spend too much money, you want to do it with as little cost as possible.
Definitions

A diamond of size k is 2k-1 lines of digits, 0-9, separated by single spaces, organized in the following way:

    Line i (1 ≤ i ≤ k) contains k-i spaces, then i digits separated by single spaces.
    Line i (k < i < 2k) contains i-k spaces, then 2k-i digits separated by single spaces.

An elegant diamond of size k is a diamond of size k with the following two symmetry properties:

    Horizontal symmetry: Let ci be the number of digits on line i. The jth digit on line i (where j=1 for the first digit) must be the same as the ci+1-jth digit.
    Vertical symmetry: The jth digit on line i (where i=1 for the first line) must be the same as the jth digit on line 2k-i.

A diamond of size k can be enhanced by adding digits to it. The result of enhancing a diamond of size k has the following properties:

    The result is a diamond of size ≥ k.
    The original diamond is part of the result. In other words, there exist some X and some Y such that, for all values of i and j such that the jth character of the ith line of the original is a digit (as opposed to a space), the j+Xth character on the i+Yth line of the result is also a digit and it's the same as the jth character on the ith line of the original.

The cost of enhancing a diamond is equal to the number of digits in the result of the enhancement, minus the number of digits in the original diamond.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of a single integer k in a line on its own, followed by a diamond of size k.
