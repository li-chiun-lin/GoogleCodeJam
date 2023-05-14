# Problem

Some pranksters have watched too much Discovery Channel and now they want to build a crop triangle during the night. They want to build it inside a large crop that looks like an evenly spaced grid from above. There are some trees planted on the field. Each tree is situated on an intersection of two grid lines (a grid point). The pranksters want the vertices of their crop triangle to be located at these trees. Also, for their crop triangle to be more interesting they want the center of that triangle to be located at some grid point as well. We remind you that if a triangle has the vertices (x1, y1), (x2, y2) and (x3, y3), then the center for this triangle will have the coordinates ((x1 + x2 + x3) / 3, (y1 + y2 + y3) / 3).

You will be given a set of points with integer coordinates giving the location of all the trees on the grid. You are asked to compute how many triangles you can form with distinct vertexes in this set of points so that their center is a grid point as well (i.e. the center has integer coordinates).

If a triangle has area 0 we will still consider it a valid triangle.

## Input

The first line of input gives the number of cases, N. N test cases follow. Each test case consists of one line containing the integers n, A, B, C, D, x0, y0 and M separated by exactly one space. n will be the number of trees in the input set. Using the numbers n, A, B, C, D, x0, y0 and M the following pseudocode will print the coordinates of the trees in the input set. mod indicates the remainder operation.

The parameters will be chosen such that the input set of trees will not have duplicates.

X = x0, Y = y0
print X, Y
for i = 1 to n-1
  X = (A * X + B) mod M
  Y = (C * Y + D) mod M
  print X, Y
