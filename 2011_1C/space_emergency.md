# Problem

There's an emergency—in space! You need to send your fleet's flagship as quickly as possible from star 0 to star N, traveling through the other stars in increasing numerical order along the way (0→1→...→N). Your flagship normally travels at a speed of 0.5 parsecs per hour.

In addition to sending your flagship, you can order your engineers to build up to L speed boosters at different stars. Building a speed booster takes t hours, and all L speed boosters can be built in parallel. While your flagship travels from a star with a completed speed booster to the next star, its speed is 1 parsec per hour.

If a speed booster is completed at a star while your flagship is traveling from that star to the next one, your flagship will start moving faster as soon as the speed booster is completed.

How many hours does it take your flagship to get to star N if you build speed boosters to make it arrive as soon as possible?

## Input

The first line of the input gives the number of test cases, T. T lines follow. Each contains integers, L, t, N and C, followed by C integers ai, all separated by spaces. ai is the number of parsecs between star k*C+i and star k*C+i+1, for all integer values of k.

For example, with N=8, C=3, a0=3, a1=5 and a2=4, the distances between stars are [3, 5, 4, 3, 5, 4, 3, 5].
