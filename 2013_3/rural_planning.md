# Problem

You have recently purchased a nice big farmyard, and you would like to build a fence around it. There are already N fence posts in your farmyard.

You will add lengths of fence in straight lines connecting the fence posts. Unfortunately, for reasons you don't fully understand, your lawyers insist you actually have to use all the fence posts, or things will go bad.

In this problem, the posts will be represented as points in a 2-dimensional plane. You want to build the fence by ordering the posts in some order, and then connecting the first with the second, second with third, and finally the last one with the first. The fence segments you create should be a polygon without self-intersections. That is, at each fence-post there are only two fence segments, and at every other point there is at most one fence segment.

Now that's easy, but you also actually want to preserve the fact your farmyard is big! It's not really fun to wall off most of your farmyard with the fences. So you would like to create the fence in such a way that the enclosed area is more than half of the maximum area you could enclose if you were allowed not to use all the posts.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of each test case contains the number N of posts. The posts are numbered from 0 to N - 1. Each of the next N lines contains two integers Xi and Yi separated by a single space: the coordinates of the i-th post.
