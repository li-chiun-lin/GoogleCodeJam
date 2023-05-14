# Problem

You have 2n marbles on a square grid. The marbles are colored in n different colors such that there are exactly 2 marbles of each color. The marbles are placed at the coordinates (1,0), (2,0), ..., (2n, 0).

Your task is to draw a path for each color that joins the two marbles of that color. Each path should be composed of vertical or horizontal line segments between grid points. No two paths can intersect or touch each other. No path may cross the y=0 line. Each path can only touch the y=0 line at the position of the two marbles it is connecting, so the first and last line segment of each path must be vertical.

Given an arrangement of marbles, return the minimum height of a solution, or return -1 if no solution exists. The height is defined as the difference between the highest and lowest Y-coordinates of the paths used.

An example:

red red blue yellow blue yellow

One solution would be:

 +---+    +-----------+
 |   |    |           |
red red blue yellow blue yellow
                 |           |
                 +-----------+

The minimum height is 2 in this case.

## Input

The first line of input gives the number of cases, T. T test cases follow. The first line of each case contains n, the number of different colors for the marbles. The next line contains a string of 2n words separated by spaces which correspond to the colors of the marbles, in order from left to right. Each color is a string of lower case letters ('a' .. 'z') no longer than 10 characters. There will be exactly n different colors and each color will appear exactly twice.
