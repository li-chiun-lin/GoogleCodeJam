# Problem

You are studying a swarm of N fireflies. Each firefly is moving in a straight line at a constant speed. You are standing at the center of the universe, at position (0, 0, 0). Each firefly has the same mass, and you want to know how close the center of the swarm will get to your location (the origin).

You know the position and velocity of each firefly at t = 0, and are only interested in t ≥ 0. The fireflies have constant velocity, and may pass freely through all of space, including each other and you. Let M(t) be the location of the center of mass of the N fireflies at time t. Let d(t) be the distance between your position and M(t) at time t. Find the minimum value of d(t), dmin, and the earliest time when d(t) = dmin, tmin.

## Input

The first line of input contains a single integer T, the number of test cases. Each test case starts with a line that contains an integer N, the number of fireflies, followed by N lines of the form

x y z vx vy vz

Each of these lines describes one firefly: (x, y, z) is its initial position at time t = 0, and (vx, vy, vz) is its velocity.
