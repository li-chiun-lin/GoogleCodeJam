# Problem

Ninjutsu is the martial art of the mysterious Japanese assassins, ninja. As a beginner in the practice of ninjutsu, your first task is to master the use of the grappling hook.

A grappling hook is a technologically-advanced device consisting of a hook tied to some (very strong and very thin) rope. Proper use of a grappling hook involves throwing the hook at a target and hoping that it catches.

This time, it did! You are now hooked onto a target that is located at (0, 0). Your rope extends to the left, and you're at the end of it; when you jump, you will start swinging counter-clockwise around the target. There are other targets located to the right and above (0, 0), at (xi, yi)) with xi ≥ 0 and yi ≥ 0 When an interior point of the rope (not either end) contacts one or more targets, the rope will bend around the target closest to its moving end. Ignore your starting velocity; because you are a ninja, it is fast enough that you will continue bending around targets until you are spinning around a single one.

Your rope currently has length R, but you may choose to cut it down to any shorter length r (including non-integers) before you start swinging. As such, you will start at (-r, 0) and swing down (counter-clockwise) toward (0, -r).

What is the maximum number of bends you can put into the rope with one swing? A bend happens when your rope touches a target and then rotates some non-zero number of degrees around that target. The rope will always remain perfectly straight (again, this is possible because you are a ninja), except at bends.

## Example

In the example above, there are 6 points:

    (0, 0),
    (3, 1),
    (12, 4),
    (14, 5),
    (13, 7), and
    (7, 10).

You have a rope of length 24. If you do not cut the rope, then you will bend around point (12, 4), then around point (14, 5), then around point (13, 7), and finally, you will be stuck orbiting point (7, 10) with about 0.1705 units of rope remaining. This amounts to a total of 4 bends. Although you touch point (3, 1), it does not contribute a bend because it is collinear with the points (0, 0) and (12, 4).

If, however, you cut the rope by 0.18 units, you will not have enough length to reach point (7, 10) and will instead follow the path

(0, 0)--(12, 4)--(14, 5)--(13, 7)--(12, 4)--(14, 5)

and will end up orbiting point (14, 5) with about 1.3004 units of rope remaining. This path amounts to 5 bends, in total, and is an optimal solution.


Case #1 in the sample input below represents this example.

## Input

The input will start with a line containing T, the number of test cases to follow. Each test case will start with two integers together on a line: N and R. The next N lines will each contain a pair of integers -- xi and yi -- the coordinates of the targets, starting with the target at (0, 0).
