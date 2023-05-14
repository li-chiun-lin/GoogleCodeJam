# Problem

You're playing a video game, in which you will get an achievement if you complete all of the levels consecutively without dying. You can play the levels in any order, and each time you play a level you'll either complete it or die. Each level has some probability that you'll complete it, and takes some amount of time. In what order should you play the levels so that the expected time it takes you to get the achievement is minimized? Assume that it takes equally long to beat a level or to die in it, and that you will start again from the first level in your ordering as soon as you die.

Note: If you fail to complete a level, you do not personally die—only your character in the game dies. If that were not the case, only a few people would try to earn this achievement.

## Input

The first line of the input gives the number of test cases, T. T test cases follow, each of which consists of three lines. The first line of each test case contains a single integer N, the number of levels. The second line contains N space-separated integers Li. Li is the number of seconds level i lasts, which is independent of whether you complete the level or die. The third line contains N space-separated integers Pi. Pi is the percent chance that you will die in any given attempt to complete level i.
