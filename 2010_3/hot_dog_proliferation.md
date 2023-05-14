# Problem

A number of hot dog vendors have started selling hot dogs at corners (intersections) along a very long east-west street. The problem is that multiple vendors might be selling at the same corner, and then they will take each other's business. All is not lost though! The hot dog vendors have a plan.

If there are ever two or more vendors at the same corner, then exactly two of the vendors can perform a move, which means:

    One vendor moves one corner further to the east along the street.
    The other vendor moves one corner further to the west along the street.

Remember that the street is really long, so there is no danger of running out of corners. Given the starting positions of all hot dog vendors, you should find the minimum number of moves they need to perform before the vendors are all separated (meaning they are all on different corners).

For example, suppose the street begins with the following number of hot dog vendors on each corner, listed in order from west to east:

... 0 0 2 1 2 0 0 ...

Then the vendors can be separated in three moves, as shown below:

... 0 0 2 1 2 0 0 ...
        |
        +--- Do a move here

... 0 1 0 2 2 0 0 ...
          |
          +--- Do a move here

... 0 1 1 0 3 0 0 ...
            |
            +--- Do a move here

... 0 1 1 1 1 1 0 ...

## Input

Each street corner is labeled with an integer, positive or negative. For each i, corner i+1 refers to the next corner to the east from corner i. We will use this labeling system to describe corners in the input file.

The first line of the input file contains the number of cases, T. T test cases follow. Each case begins with the number of corners C that have at least one hot dog vendor in the starting configuration. The next C lines each contain a pair of space-separated integers P, V, indicating that there are V vendors at corner P
