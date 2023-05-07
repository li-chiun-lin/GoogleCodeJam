# Problem

Two scout teams are taking part in a scouting competition. It is the finals and each team is well prepared. The game is played along a river that flows west to east. There are 4N
trees planted along the river, with exactly 2N of them lined up along the north bank and 2N

lined up along the south bank. Both teams alternate turns playing the game. Your team goes first.

On each turn, the playing team selects one tree on each bank that does not have any ropes tied to it and ties a rope between both trees, making it cross the river. Each rope that is added is placed higher than all previous ropes. The playing team scores 1 point per each previously used rope that passes below the newly added rope.

After 2N

turns, all trees have exactly one rope tied to them, so there are no more possible plays and the game is over. The score of each team is the sum of the scores they got in all of their turns. If your team's score is strictly greater than the opposing team's score, your team wins. If your team's score is less than or equal to the opposing team's score, your team does not win.

The following animation shows a possible game with N=2

. Your team is represented by the color red and the other team by the color blue.

Animation of the first sample interaction

The opposing team felt confident that going second is a large advantage, so they revealed their strategy. On their turn, they choose the play that yields the maximum possible score for this turn. If multiple such plays exist, they choose one at random. This choice is generated uniformly at random, and independently for each play, for each test case and for each submission. Therefore, even if you submit exactly the same code twice, the opposing team can make different random choices.

You play T
games in total, and your team must win at least W of them.
