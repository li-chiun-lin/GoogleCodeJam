# Problem

Alice and Bob want to play a game. The game is played on a chessboard with R rows and C columns, for a total of RC squares. Some of these squares are burned.

A king will be placed on an unburned square of the board, and Alice and Bob will make successive moves with the king.

In a move, the player must move the king to any of its 8 neighboring squares, with the following two conditions:

    The destination square must not be burned
    The king must never have been in the destination square before.

If a player can't make a move, he or she loses the game. Alice will move first; you need to determine who will win, assuming both players play optimally.

## Input

The first line of input gives the number of cases, N.

N test cases follow. The first line of each case will contain two integers, R and C. The next R lines will contain strings of length C, representing the C squares of each row. Each string will contain only the characters '.', '#' and 'K':

    '#' means the square is burned;
    '.' means the square is unburned, and unoccupied; and
    'K' means the king is in that cell at the beginning of the game.

There will be only one 'K' character in each test case.
