# Problem

Before graduating from Awesome Programmer University, students traditionally perform certain "graduation requirements". One of these is driving around a traffic circle backwards. For most people, this is crazy enough, but as an extra challenge, you want to see if you can go backwards around the traffic circle multiple times without stopping.

The traffic circle consists of N intersections, spaced evenly around the circle. A car would normally enter the traffic circle at one intersection, and then every second, it will move to the next counter-clockwise intersection, until eventually it reaches its destination and leaves.

You have been watching cars enter and leave the traffic circle for X seconds. For each car, you record the time it enters the circle, as well as the intersections it enters and leaves at. All cars are moving counter-clockwise at the rate of 1 intersection per second. Each car you watched exited the circle before coming back to the intersection it entered at. There are multiple lanes on the traffic circle, so multiple cars can occupy the same position at the same time.

If you had planned it just right, how long could you have driven clockwise in the traffic circle during this time? You must enter the circle at some integer time >= 0, leave at time <= X, and once you leave, you are not allowed to come back. When in the traffic circle, you must travel clockwise at the rate of 1 intersection per second. You want to play it safe (well, as safe as driving backwards on a traffic circle can be), so you must never touch or pass by another car. In particular, you cannot leave the circle at an intersection at which another car is entering at the same moment, and you cannot enter the circle at an intersection at which another car is leaving at the same moment. You can choose when and where to enter and leave the circle.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of any test case describes the number C of cars you observed. The second line contains two integers, X and N — the time (in seconds) for which you observed the circle, and the number of intersections on the circle. Next C lines describe the cars you have seen. Each of those lines contains three integers si, ei and ti — the intersection at which the car entered the circle, the intersection on which it left and the time at which it entered. The intersections are numbered from 1 to N, counterclockwise (that is, the intersection number 2 is the next intersection counterclockwise from number 1).
