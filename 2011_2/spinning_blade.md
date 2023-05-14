# Problem

Being bored with the traps in your secret hideout design, you decided to go for something classical, but always enjoyable - the spinning blade. You ordered a really heavy metal sheet out of which you will cut the blade; a uniform square C-by-R grid will be painted on the sheet. You have determined the best shape for the blade -- you will first cut a large square consisting of K-by-K grid cells, where K ≥ 3. Then, you will cut out the four 1-by-1 corner cells out of the square to end up with a blade. After determining all this, you started waiting for the sheet to arrive.

When the sheet arrived, you were shocked to find out that the sheet had imperfections in it! You expected each cell to have mass D, but it turned out that the mass can vary a bit because of differences in thickness. This is bad because you want to insert a shaft exactly in the center of the blade and spin it very fast, so the center of mass of the blade must be exactly in its center as well. The definition of the center of mass of a flat body can be found below.

Given the grid and the mass of each cell, what is the largest possible size of the blade you can make so that the center of mass is exactly in its center?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each one starts with a line containing 3 integers: R, C and D — the dimensions of the grid and the mass you expected each cell to have. The next R lines each contain C digits wij each, giving the differences between the actual and the expected mass of the grid cells. Each cell has a uniform density, but could have an integer mass between D + 0 and D + 9, inclusive.
