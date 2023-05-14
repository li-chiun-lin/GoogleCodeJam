# Problem

In a big, square room there are two point light sources: one is red and the other is green. There are also n circular pillars.

Light travels in straight lines and is absorbed by walls and pillars. The pillars therefore cast shadows: they do not let light through. There are places in the room where no light reaches (black), where only one of the two light sources reaches (red or green), and places where both lights reach (yellow). Compute the total area of each of the four colors in the room. Do not include the area of the pillars.

## Input

    One line containing the number of test cases, T.

Each test case contains, in order:

    One line containing the coordinates x, y of the red light source.
    One line containing the coordinates x, y of the green light source.
    One line containing the number of pillars n.
    n lines describing the pillars. Each contains 3 numbers x, y, r. The pillar is a disk with the center (x, y) and radius r.

The room is the square described by 0 ≤ x, y ≤ 100. Pillars, room walls and light sources are all disjoint, they do not overlap or touch.
