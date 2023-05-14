# Problem

Your friends are all going to a restaurant for dinner tonight. They're all very good at math, but they're all very strange: your ath friend (starting from 1) will be unhappy unless the total cost of the meal is a positive integer, and is divisible by a.

Your friends enter the restaurant one at a time. As soon as someone enters the restaurant, if that person is unhappy then the group will call a waiter immediately.

As long as there is at least one unhappy person in the restaurant, one of those unhappy people will buy the lowest-cost item that will make him or her happy. This will continue until nobody in the restaurant is unhappy, and then the waiter will leave. Fortunately, the restaurant sells food at every integer price. See the explanation of the first test case for an example.

Your friends could choose to enter the restaurant in any order. After the waiter has been called, if there is more than one unhappy person in the restaurant, any one of those unhappy people could choose to buy something first. The way in which all of those choices are made could have an effect on how many times the group calls a waiter.

As the owner of the restaurant, you employ some very tired waiters. You want to calculate the spread of your friends: the difference between the maximum number of times they might call a waiter and the minimum number of times they might call a waiter.

## Input

The first line of the input gives the number of test cases, T. T test cases follow, each on its own line. Each test case will contain one integer N, the number of friends you have.
