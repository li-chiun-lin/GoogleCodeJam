# Problem

In the First City of Mars there are N bus stops, all aligned in a straight line of length N-1 km. The mayor likes to keeps things simple, so he gave the bus stops numbers from 1 to N, and separated adjacent stops by exactly 1 km.

There are also K buses in the city. The mayor has to plan the bus schedule and he would like to know in how many ways that can be done. This number can be very large. Luckily there are a few constraints:

    In the beginning of the day all the buses are in the first K bus stops (one bus per stop)
    Buses only move from the left to the right (1 is the leftmost bus stop)
    At the end of the day all the buses must be in the last K bus stops (one bus per stop)
    In each bus station exactly one bus has to stop
    For the same bus the distance between any two consecutive stops is at most P km

Help the mayor evaluate the number of schedules. However try not to give him very bad news (a lot of schedules) so just output the real number modulo 30031.

## Input

The first line in the input file is the number of cases T.
Each of the next T lines contains 3 integers separated by one space: N, K and P.
