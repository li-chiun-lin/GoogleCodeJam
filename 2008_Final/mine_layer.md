# Problem

MineLayer is a MineSweeper-like puzzle game played on an R by C grid. Each square in the grid either has one mine or no mines at all. A MineLayer puzzle consists of a grid of numbers, each of which indicates the total number of mines in all adjacent squares and in the square underneath. The numbers will thus range from zero to nine.

The objective of MineLayer is to figure out a layout of the mines in the grid that matches the given clues.

Below is a typical 3 by 4 grid. The original layout is on the left, and the puzzle on the right.

Since there may be many solutions, your task is to write a program that outputs the maximum possible number of mines in the middle row. The number of rows will always be odd, and there will always be at least one solution to the puzzle.

## Input

The first line of input gives the number of cases, N. N test cases follow.

The first line of each case contains two space-separated numbers: R, the number of rows, and C, the number of columns. R is always an odd integer. Each of the next R lines contains C space-separated numbers that denote the clues of that row.
