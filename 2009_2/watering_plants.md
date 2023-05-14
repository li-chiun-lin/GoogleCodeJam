# Problem

In your greenhouse you have a number of plants which you need to water.

Each of the plants takes up an area which is a circle. No two of the plants overlap or touch each other.

You are going to buy two sprinklers. Each of the sprinklers will spray everything within a circle of radius R with water.

One of the sprinklers will run in the morning, and one will run at night. For you to be satisfied that a plant will get enough water, either the whole area of the plant must be watered in the morning, or the the whole area of the plant must be watered at night. So each of the circles representing a plant must be completely in one or both of the two circles representing the area the sprinklers can water.

Given the location and radius of each of the plants, find the minimum radius R so that it is possible to place the two sprinklers to water all the plants. The sprinklers will be installed on the ceiling, so a sprinkler's position can be inside the area of a plant.

## Input

    One line containing an integer C, the number of test cases in the input file.

For each test case, there will be:

    One line containing N, where N is the number of plants you have.
    N lines, one for each plant, containing three integers "X Y R", where (X, Y) are the coordinates of the center of the plant, and R is the radius of the plant.
