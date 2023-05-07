# Problem

You are studying the history of the Great Wall of China, which was built by the Chinese to protect against military incursions from the North. For the purposes of this problem, the Great Wall stretches from infinity in the East to minus infinity in the West. As this is a lot of distance to cover, the Great Wall was not built at once. Instead, for this problem we assume that the builder used a reactive strategy: whenever a part of the border was attacked successfully, the Wall on this part of the border would be raised to the height sufficient to stop an identical attack in the future.

The north border of China was frequently attacked by nomadic tribes. For the purposes of this problem, we assume that each tribe attacks the border on some interval with some strength S. In order to repel the attack, the Wall must have height S all along the defended interval. If even a short stretch of the Wall is lower than needed, the attack will breach the Wall at this point and succeed. Note that even a successful attack does not damage the Wall. After the attack, every attacked fragment of the Wall that was lower than S is raised to height S — in other words, the Wall is increased in the minimal way that would have stopped the attack. Note that if two or more attacks happened on the exact same day, the Wall was raised only after they all resolved, and is raised in the minimum way that would stop all of them.

Since nomadic tribes are nomadic, they did not necessarily restrict themselves to a single attack. Instead, they tended to move (either to the East or to the West), and periodically attack the Wall. To simplify the problem, we assume they moved with constant speed and attacked the Wall at constant intervals; moreover we assume that the strength with which a given tribe attacked the Wall changed by a constant amount after each attack (either decreased from attrition, or grew from experience).

Assuming that initially (in 250 BC) the Wall was nonexistent (i.e., of height zero everywhere), and given the full description of all the nomadic tribes that attacked the Wall, determine how many of the attacks were successful.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing a single integer N: the number of the tribes attacking the Wall. N lines follow, each describing one tribe. The ith line contains eight integers di, ni, wi, ei, si, delta_di, delta_pi and delta_si separated by spaces, describing a single nomadic tribe:

    di – the day of the tribe's first attack (where 1st January, 250BC, is considered day 0)
    ni – the number of attacks from this tribe
    wi, ei – the westmost and eastmost points respectively of the Wall attacked on the first attack
    si – the strength of the first attack
    delta_di – the number of days between subsequent attacks by this tribe
    delta_pi – the distance this tribe travels to the east between subsequent attacks (if this is negative, the tribe travels to the west)
    delta_si – the change in strength between subsequent attacks
