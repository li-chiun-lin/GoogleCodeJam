# Problem

Ten-year-old Tangor has just discovered how to compute the area of a triangle. Being a bright boy, he is amazed by how many different ways one can compute the area. He also convinced himself that, if all the points of the triangle have integer coordinates, then the triangle's area is always either an integer or half of an integer! Isn't that nice?

But today Tangor is trying to go in the opposite direction. Instead of taking a triangle and computing its area, he is taking an integer A and trying to draw a triangle of area A/2. He restricts himself to using only the integer points on his graph paper for the triangle's vertices.

More precisely, the sheet of graph paper is divided into an N by M grid of square cells. The triangle's vertices may only be placed in the corners of those cells. If you imagine a coordinate system on the paper, then these points are of the form (x, y), where x and y are integers such that 0 ≤ x ≤ N and 0 ≤ y ≤ M.

Given the integer A, help Tangor find three integer points on the sheet of graph paper such that the area of the triangle formed by those points is exactly A/2, if that is possible. In case there is more than one way to do this, any solution will make him happy.

## Input

One line containing an integer C, the number of test cases in the input file.

The next C lines will each contain three integers N, M, and A, as described above.
