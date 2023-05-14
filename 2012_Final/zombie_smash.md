# Problem

You are playing Zombie Smash: a game where the objective is to smash zombies with your trusty Zombie Smasher as they pop out of graves at the graveyard. The graveyard is represented by a flat 2D grid. Each zombie will pop out of a grave at some (X, Y) cell on the grid, stand in place for 1000 milliseconds (ms), and then disappear back into the grave. At most one zombie can stand around a grave at a time.

You can move to any one of the 8 cells adjacent to your location in 100ms; i.e., you can move North, East, South, West, NW, NE, SW, and SE of your current location. You may move through or stand on a cell even if it is currently occupied by a zombie. You can smash a zombie instantly once you reach the cell that the zombie is standing on, but once you smash a zombie it takes 750ms for your Zombie Smasher to recharge before you can smash another zombie. You may move around while Zombie Smasher is recharging. For example, immediately after smashing a zombie at (0, 0):

-  It will take 750ms to reach and smash a zombie at (1, 1) or
-  2000ms to reach and smash a zombie at (20, 20). 

You start at cell (0, 0) at the beginning of the game (time=0). After you play a level you would like to know how many zombies you could have smashed, if you had played optimally.
Input

The first line will contain a single integer T, the number of test cases. It is followed by T test cases, each starting with a line containing a single integer Z, the number of zombies in the level.

The next Z lines contain 3 space-separated integers each, representing the location and time at which a given zombie will appear and disappear. The ith line will contain the integers Xi, Yi and Mi, where:

-  Xi is the X coordinate of the cell at which zombie i appears,
-  Yi is the Y coordinate of the cell at which zombie i appears,
-  Mi is the time at which zombie i appears, in milliseconds after the beginning of the game. The time interval during which the zombie can smashed is inclusive: if you reach the cell at any time in the range [Mi, Mi + 1000] with a charged Zombie Smasher, you can smash the zombie in that cell.
