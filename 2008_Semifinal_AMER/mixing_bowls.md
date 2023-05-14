# Problem

You are following a recipe to create your lunch.

The recipe is a mixture made by combining ingredients together in a bowl. Each ingredient will be either:

    Another mixture which you must make first in a separate bowl; or
    A basic ingredient you already have in your kitchen, which can be added directly.

To make a mixture, you need to have all its ingredients ready, take an empty bowl and mix the ingredients in it. It is not possible to make mixtures by adding ingredients to an already-existing mixture in a bowl.

For example, if you want to make CAKE (a mixture) out of CAKEMIX (a mixture) and lies (a basic ingredient), then you must first make CAKEMIX in its own bowl, then add the CAKEMIX and lies to a second bowl to make the CAKE.

Once you have used a mixture as an ingredient and emptied the bowl it was prepared in, you can re-use that bowl for another mixture. So the number of bowls you need to prepare the recipe will depend on the order in which you decide to make mixtures.

Determine the minimum number of bowls you will need.

## Input

The first line will contain an integer C, the number of test cases in the input file.

For each test case, there will be:

    One line containing an integer N, the number of mixtures in the test case.
    N lines, one for each mixture, containing:
        One string giving the mixture name;
        An integer M, the number of ingredients in this mixture;
        M strings, giving the names of each of the ingredients of this mixture.

The tokens on one line will be separated by single spaces.

The first mixture in a test case is the recipe you are making.

The names of mixtures are strings of between 1 and 20 UPPERCASE letters.

The names of basic ingredients are strings of between 1 and 20 lowercase letters.

Each mixture is used in exactly one other mixture, except for the recipe, which is not used in any other mixture. Each ingredient will appear at most once in the ingredient list for a mixture. No mixture will (directly or indirectly) require itself as an ingredient.
