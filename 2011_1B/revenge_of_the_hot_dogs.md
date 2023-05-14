# Problem

Last year, several hot dog vendors were lined up along a street, and they had a tricky algorithm to spread themselves out. Unfortunately, the algorithm was very slow and they are still going. All is not lost though! The hot dog vendors have a plan: time to try a new algorithm!

The problem is that multiple vendors might be selling too close to each other, and then they will take each other's business. The vendors can move along the street at 1 meter/second. To avoid interfering with each other, they want to stand so that every pair of them is separated by a distance of at least D meters.

Remember that the street is really long, so there is no danger of running out of space to move in either direction. Given the starting positions of all hot dog vendors, you should find the minimum time they need before all the vendors are separated (each two vendors are at least D meters apart from each other).

## Input

Each point of the street is labeled with a number, positive, negative or zero. A point labeled p is |p| meters east of the point labeled 0 if p is positive, and |p| meters west of the point labeled 0 if p is negative. We will use this labeling system to describe the positions of the vendors in the input file.

The first line of the input file contains the number of cases, T. T test cases follow. Each case begins with a line containing the number of points C that have at least one hot dog vendor in the starting configuration and an integer D -- the minimum distance they want to spread out to. The next C lines each contain a pair of space-separated integers P, V, indicating that there are V vendors at the point labeled P.
