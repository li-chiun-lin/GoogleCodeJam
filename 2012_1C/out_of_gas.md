# Problem

Your car is out of gas, and you want to get home as quickly as possible! Fortunately, your home is at the bottom of a hill and you (in your car) are at the top of it. Unfortunately, there is a car in front of you, and you can't move past it. Fortunately, your brakes are working and they are very powerful.

You start at the top of the hill with speed 0 m/s at time 0 seconds. Gravity is pulling your car down the hill with a constant acceleration. At any time, you can use your brakes to reduce your speed, or temporarily reduce your acceleration, by any amount.

How quickly can you reach your home if you use your brakes in the best possible way?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of each test case contains three space-separated numbers: a real-valued number D, the distance in meters to your home down the hill; and two integers, N and A. The distance D will be given in exactly 6 decimal places.

N lines follow, each of which contains two space-separated, real-valued numbers: a time ti in seconds, and a position xi in meters. The ti and xi values will be given in exactly 6 decimal places.

One line follows, with A space-separated, real-valued numbers ai, which are accelerations in m/s2. The accelerations will be given in exactly 2 decimal places.

The other car's position is specified by the (ti, xi) pairs. The car's position at time ti seconds is xi meters measured from the top of the hill (i.e. your initial position). The car travels at constant speed between time ti and ti+1. The positions and times will both be given in increasing order, with t0=0.

For example, if t5=10, x5=20, t6=20, x6=40, then 10 seconds after the start, the other car is 20 meters down the hill; 15 seconds after the start, the other car is 30 meters down the hill; and 20 seconds after the start, the other car is 40 meters down the hill.
