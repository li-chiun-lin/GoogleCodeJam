# Problem

A new year brings a new calendar, new challenges, and a lot of new fun in life. Some things, however, never change. There are still many great programming contests to be held, and our heroine Sphinny's passion for them remains unchanged.

There are several tournaments Sphinny is interested in. Each tournament will consist of a number of rounds. The organizer of each tournament has not decided on what date the tournament will start, but has decided how many rounds there will be in the tournament and how many days after the start date each round will be.

In some situations, two or more rounds (from different tournaments) can be scheduled on the same day. As Sphinny is so keen on problem solving, she will be happier if more rounds are scheduled on the same day. Her happiness value is computed as follows: for each day on which there are S rounds, her happiness will be increased by S2. Her happiness starts at 0 (don't worry — 0 is a happy place to start).

In the picture below there are three tournaments, each represented by a different color, and Sphinny's total happiness is 20. One tournament starts on the second day of the year, one starts on the fifth day of the year, and one starts on the sixth day of the year.





There are N days in the year. Each tournament will begin on any of the N days with equal probability. The big question for this year is what the expected value of Sphinny's happiness is.

As a perfectionist, she is not going to solve the problem approximately. Instead, she wants to know the result exactly. The number of tournaments is T, and there are NT equally likely ways to select the start dates of the tournaments. She is going to express her expected happiness as K+A/B, where K and B are positive integers and A is a non-negative integer less than B. If A is zero then B must be one, otherwise A and B must not have a common factor greater than one.

If a tournament starts late enough in the year, some of its rounds might be scheduled during the next year. Those rounds do not contribute to Sphinny's happiness this year.

## Input

The first line of the input is a single integer C, the number of test cases. C tests follow. The first line of each test case is in the form

N T

where N is the number of days in the year, and T is the number of tournaments. T lines then follow, one for each tournament, in the format

m d2 d3 ... dm

indicating that there are m rounds, and the i-th round will be held on day di of the tournament. The first round of a tournament is held on day 1 (d1 = 1).
