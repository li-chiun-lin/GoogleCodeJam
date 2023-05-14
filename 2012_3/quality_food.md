# Problem

You just moved from your hometown to a big metropolitan city! You love everything about your new environment, except for the food. Your hometown provides the best food in the region (called "quality food") and you sure will miss it.

Fortunately, the largest restaurant in your hometown provides a food delivery service. You can purchase any amount of food in one delivery. There is a constant delivery fee for every delivery, regardless of the amount of food purchased in the delivery.

This restaurant serves different types of food. Each type of food has two properties: a price-per-meal, and a time-to-stale. One "meal" of food will feed you for one day; once a meal has been eaten, it cannot be eaten again. The time-to-stale of a type of food is the maximum number of days for which that food can still be eaten, counting from when you received it. A time-to-stale of zero means you must eat that type of food on the day of delivery.

In a single delivery you can purchase as many different types of food, and as many meals of each of those types, as you have money for. Note that if a particular type of food has a time-to-stale of t, it doesn't make any sense to order more than t+1 meals of that food in one delivery: at least one meal would go stale before you could eat it.

This restaurant has a very fast delivery service, so you will receive all the food in a delivery on the same day that you purchased it, and you may eat some of the food on the same day. Food delivery is the only way for you to receive quality food.

Given an amount of money, which you can spend on meal prices and delivery fees, what is the maximum number of days for which you can eat quality food every day?

## Input

The first line of input gives the number of test cases, T. T test cases follow. Each test case will begin with three integers, M, F and N, denoting the amount of money you have, the delivery fee, and the number of types of food provided by the restaurant, respectively. N lines follow, each will consist of two integers, Pi and Si, denoting respectively the price-per-meal and time-to-stale of one type of food.
