# Problem

You've been playing roulette for a while in a local casino. Roulette is a simple casino game in which multiple players place bets on one or more numbers between 0 and 36 (inclusive). Next, a wheel is spun in one direction with a ball spinning in the other direction. The roulette wheel contains the same numbers 0 to 36. Some real roulette wheels also have a space labeled 00, but ours does not. Eventually, the ball falls on one of the numbers. If a player placed a bet on that particular number, he receives 36 times his bet (so the profit of that bet is 35 times the bet). All bets placed on other numbers lose.

Unfortunately, luck hasn't been on your side, and you have been losing all night long. At one point, you started to wonder whether the roulette game was fair or not, and after observing the game some more, you noticed a pattern that must be profitable for the casino: the ball always lands on one of the numbers that has the least total money bet on it! If multiple numbers tie for the least total money bet, the ball lands on one of those uniformly at random.

Of course, you'll be notifying the authorities about this foul play, but first you want to win your money back by exploiting your new-found knowledge. To do so, you wait until all other players have placed their bets and then place bets of your own. Unfortunately, you have a limited budget left, so you cannot bet more than that. You are allowed to bet on zero or more different numbers, and each of those bets can be any positive integer amount (perhaps with different amounts for different numbers), so as long as the sum of your bets does not exceed your budget. What is the maximum expected profit you can make?

## Input

The first line of input gives the number of cases, T. T test cases follow. Each test case consists of two lines. The first line contains two integers: the budget you still have, B, and the number of numbers other players have placed bets on, N. The second line contains N integers Xi, the total amounts of money bet by other players on each of those different numbers.
