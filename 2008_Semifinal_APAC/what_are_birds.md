# Problem

You are studying animals in a forest, and are trying to determine which animals are birds and which are not.

You do this by taking two measurements of each animal – their height and their weight. For an animal to be a bird, its height needs to be within some range, and its weight needs to be within another range, but you're not sure what the height and weight ranges are. You also know that every animal that satisfies these ranges is a bird.

You have taken some of the animals you have measured and shown them to biologists, and they have told you which are birds and which are not. This has given you some information on what the height and weight ranges for a bird must be. For the remaining animals, your program should determine if they are definitely birds, definitely not birds, or if you don't know from the information you have.

## Input

One line containing an integer C, the number of test cases in the input.

Then for each of the C test cases:

    One line containing an integer N, the number of animals you have shown to the biologists.
    N lines, one for each of these animals, each of the format "H W X", where H is the height of the animal, W is the weight of the animal, and X is either the string "BIRD" or "NOT BIRD". All numbers are positive integers.
    One line containing an integer M, the number of animals you have not shown to the biologists.
    M lines, one for each of these animals, each of the format "H W", where H is the height of the animal and W is the weight of the animal. All numbers are positive integers.
