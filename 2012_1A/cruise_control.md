# Problem

Cruise control is a system that allows a car to go at a constant speed, while the driver controls only the steering wheel. The driver can, of course, turn off the cruise control to avoid collisions.

In this problem, we will consider a one-way road with two lanes, and N cars using cruise control on the road. Each car is 5 meters long and goes at some constant speed. A car can change lanes at any time if it would not cause the car to collide with some other car (touching does not count as collision). Assume that changing lanes is instantaneous and simply causes the car to switch to the other lane. We are interested in whether any driver will have to turn off cruise control eventually to avoid a collision, or is it possible for all of them to drive (possibly switching lanes, but at constant speed) without collisions indefinitely. Note that even though changing lanes is instantaneous, two cars driving side by side cannot exchange places by changing lanes at the same time.

## Input

The first line of the input file gives the number of test cases, T. T test cases follow. Each test case begins with the number N. N lines follow, each describing a single car. Each line contains a character Ci (denoting whether the car is initially in the left or the right lane), two integers describing the speed Si of the car (in meters per second), and the initial position Pi of the car (in meters), denoting the distance between the rear end of the car and some fixed line across the road. All the cars are moving away from this line, and no car is behind the line.
