# Problem

You're in the middle of writing your newspaper's end-of-year economics summary, and you've decided that you want to show a number of charts to demonstrate how different stocks have performed over the course of the last year. You've already decided that you want to show the price of n different stocks, all at the same k points of the year.

A simple chart of one stock's price would draw lines between the points (0, price0), (1, price1), ... , (k-1, pricek-1), where pricei is the price of the stock at the ith point in time.

In order to save space, you have invented the concept of an overlaid chart. An overlaid chart is the combination of one or more simple charts, and shows the prices of multiple stocks (simply drawing a line for each one). In order to avoid confusion between the stocks shown in a chart, the lines in an overlaid chart may not cross or touch.

Given a list of n stocks' prices at each of k time points, determine the minimum number of overlaid charts you need to show all of the stocks' prices.

## Input

The first line of input will contain a single integer T, the number of test cases. After this will follow T test cases on different lines, each of the form:

n k
price0,0 price0,1 ... price0,k-1
price1,0 price1,1 ... price1,k-1
...
pricen-1,0 pricen-1,1 ... pricen-1,k-1

Where pricei,j is an integer, the price of the ith stock at time j.
