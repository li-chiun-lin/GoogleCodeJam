# Problem

You are given two triangle-shaped pictures. The second picture is a possibly translated, rotated and scaled version of the first. The two triangles are placed on the table, with the second one placed completely inside (possibly touching the boundary of) the first one. The second triangle is always scaled by a factor that is strictly between 0 and 1.

You need to process the picture, and for that you need a point in the picture which overlaps with the same point of the scaled picture. If there is more than one solution, you can return any of them. If there are no solutions, print "No Solution" (without the quotes) for that test case.

## Input

The first line of input gives the number of cases, N. Then for each test case, there will be two lines, each containing six space-separated integers -- the coordinates of one of the triangles -- in the format "x1 y1 x2 y2 x3 y3". The point (x1, y1) in the first triangle corresponds to the same corner of the picture as (x1, y1) in the second triangle, and similarly for (x2, y2) and (x3, y3).
