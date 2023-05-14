# Problem

You have been invited to the popular TV show "Would you like to be a millionaire?". Of course you would!

The rules of the show are simple:

    Before the game starts, the host spins a wheel of fortune to determine P, the probability of winning each bet.
    You start out with some money: X dollars.
    There are M rounds of betting. In each round, you can bet any part of your current money, including none of it or all of it. The amount is not limited to whole dollars or whole cents.
    If you win the bet, your total amount of money increases by the amount you bet. Otherwise, your amount of money decreases by the amount you bet.
    After all the rounds of betting are done, you get to keep your winnings (this time the amount is rounded down to whole dollars) only if you have accumulated $1000000 or more. Otherwise you get nothing.

Given M, P and X, determine your probability of winning at least $1000000 if you play optimally (i.e. you play so that you maximize your chances of becoming a millionaire).

## Input

The first line of input gives the number of cases, N.

Each of the following N lines has the format "M P X", where:

    M is an integer, the number of rounds of betting.
    P is a real number, the probability of winning each round.
    X is an integer, the starting number of dollars.
