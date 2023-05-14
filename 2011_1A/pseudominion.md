# Problem

You are playing a game with a fancy deck of cards. Each card has three bonus numbers: a card bonus c, a score bonus s, and a turn bonus t. Some of the cards start in your hand, while the rest are in a deck on the table. You start with one turn.

On each turn, you can choose any card from your hand and play it. If it has bonus numbers c, s, t, then the following happens:

    The card is discarded from your hand, and it can never be used again.
    You draw the first c cards from the deck into your hand. If the deck has fewer than c cards in it, you draw all of them.
    Your total score increases by s.
    Your number of remaining turns increases by t.

If you do not have any cards in your hand at the start of a turn, then nothing happens on that turn. Your goal is to get as high a score as possible before running out of turns.

For example, suppose your hand and deck contain the following cards:

```text
         +---+---+---+            +---+---+---+
   HAND: | c | s | t |      DECK: | c | s | t |
         +---+---+---+            +---+---+---+
Card #1: | 0 | 0 | 2 |   Card #4: | 1 | 1 | 0 |
Card #2: | 0 | 5 | 0 |   Card #5: | 0 | 1 | 1 |
Card #3: | 2 | 1 | 1 |   Card #6: | 2 | 2 | 0 |
         +---+---+---+            +---+---+---+
```

The following table shows how you can get a score of 8 from these cards. The first three columns show your hand, the number of turns left, and your score before playing each card, and the final column shows which card to play.

```text
+---------+------------+-------+------+
| Hand    | Turns left | Score | Play |
+---------+------------+-------+------+
| 1, 2, 3 |      1     |   0   |   1  |
| 2, 3    |      2     |   0   |   3  |
| 2, 4, 5 |      2     |   1   |   2  |
| 4, 5    |      1     |   6   |   5  |
| 4       |      1     |   7   |   4  |
| 6       |      0     |   8   |   -  |
+---------+------------+-------+------+
```

As you can see, the card bonuses and turn bonuses allow you to chain together a long sequence of cards before you have to stop.

## Input

The first line of the input gives the number of test cases, T. T test cases follow.

Each test case begins with a single line containing N, the number of cards in your hand. The next N lines each contain three integers, c, s, and t, representing the bonus numbers for a single card in your hand.

This is followed by a single line containing M, the number of cards in the deck. The next M lines each contain three integers, c, s, and t, representing the bonus numbers for a single card in the deck. These cards are listed in the same order in which you draw them.
