# Problem

Mary the Mathematician has a bakery that she founded some years ago, but after all this time she has become bored with always baking the same rectangular and circular cakes. For her next birthday, she wants to bake an irregular cake, which is defined as the area between two "polylines" between x=0 and x=W. These polylines will be called the lower boundary and the upper boundary.

Formally, a polyline is defined by a sequence of points (P0, P1, ..., Pn) going from left to right. Consecutive points are connected to form a sequence of line segments, which together make up the polyline.

Today is Mary's birthday and she has baked an irregular cake bounded by two polylines with L points and U points respectively. After singing "Happy Birthday," she wants to make G-1 vertical cuts to split the cake into G slices with equal area. She can then share these cake slices with all her guests. However, the irregular cake shape makes this task pretty tricky. Can you help her decide where to make the cuts?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing four integers: W (the cake's width), L (the number of points on the lower boundary), U (the number of points on the upper boundary) and G (the number of guests at the party).

This is followed by L lines specifying the lower boundary. The i-th line contains two integers xi and yi, representing the coordinates of the i-th point on the lower boundary. This is followed by U more lines specifying the upper boundary. The j-th line here contains two integers xj and yj, representing the coordinates of the j-th point on the upper boundary.
