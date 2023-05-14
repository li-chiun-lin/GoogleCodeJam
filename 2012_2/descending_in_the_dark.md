# Problem

You are on the face of Mount Everest. You need to find shelter before you freeze, and it's dark! What do you do?

The good news is you have already memorized the layout of the mountain. It is a grid with certain squares impassable and other squares containing caves where you can rest for the night. The bad news is you don't know where you are, and it's too steep to climb up. All you can do is move left, right, or down.

Here is an example layout, with '.' representing a passable square, '#' representing an impassable square, and numbers representing caves.

```text
######
##...#
#..#.#
#...##
#0#..#
####1#
######
```

Since it is so dark, you will move around by following a plan, which is a series of instructions, each telling you to move one square left, right, or down. If an instruction would take you to a passable square or to a cave, you will follow it. If it would take you to an impassable square, you will have to ignore it. Either way, you will continue on to the next step, and so on, until you have gone through the whole plan.

To help with your descent, you want to find out two things for each cave C:

-  What squares is it possible to reach C from? We will label the set of these squares by SC, and the number of them by nC.
-  Is there a single plan that, if followed from any square in SC, will finish with you at cave C? If so, we say the cave is lucky.

Note that you might pass by several caves while following a plan. All that matters is what square you finish on after executing all the steps, not what caves you visit along the way.

For example, in the layout above, cave 0 is lucky. There are 9 squares that it can be reached from (including itself), and the plan "left-left-down-down-left-down" will finish with you at the cave from any of those squares.

## Input

The first line of the input gives the number of test cases, T. T test cases follow, beginning with a line containing integers R and C, representing the number of rows and columns in the mountain layout.

This is followed by R lines, each containing C characters, describing a mountain layout. As in the example above, a '#' character represents an impassable square, a '.' character represents a passable square, and the digits '0'-'9' represent caves (which are also passable squares)
