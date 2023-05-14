# Problem

You're watching a show where Googlers (employees of Google) dance, and then each dancer is given a triplet of scores by three judges. Each triplet of scores consists of three integer scores from $0$ to $10$ inclusive. The judges have very similar standards, so it's surprising if a triplet of scores contains two scores that are 2 apart. No triplet of scores contains scores that are more than 2 apart.

For example: $(8, 8, 8)$ and $(7, 8, 7)$ are not surprising. $(6, 7, 8)$ and $(6, 8, 8)$ are surprising. $(7, 6, 9)$ will never happen.

The total points for a Googler is the sum of the three scores in that Googler's triplet of scores. The best result for a Googler is the maximum of the three scores in that Googler's triplet of scores. Given the total points for each Googler, as well as the number of surprising triplets of scores, what is the maximum number of Googlers that could have had a best result of at least $p$?

For example, suppose there were 6 Googlers, and they had the following total points: $29, 20, 8, 18, 18, 21$. You remember that there were 2 surprising triplets of scores, and you want to know how many Googlers could have gotten a best result of $8$ or better.

With those total points, and knowing that two of the triplets were surprising, the triplets of scores could have been:

|       |       |       |       |
|---    |---    |---    |---    |
|10     |9      |10     |       |
|6      |6      |8      |(*)    |
|2      |3      |3      |       |
|6      |6      |6      |       |
|6      |6      |6      |       |
|6      |7      |8      |(*)    |

The cases marked with a (*) are the surprising cases. This gives us 3 Googlers who got at least one score of $8$ or better. There's no series of triplets of scores that would give us a higher number than $3$, so the answer is $3$.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
Each test case consists of a single line containing integers separated by single spaces. The first integer will be $N$, the number of Googlers, and the second integer will be $S$, the number of surprising triplets of scores. The third integer will be $p$, as described above. Next will be $N$ integers $t_i$: the total points of the Googlers.

## Solution

|score1 |score2 |score3 |       |best   |sum    |
|---    |---    |---    |---    |---    |---    |
|$a$    |$a+1$  |$a+2$  |(*)    |$a+2$  |$3a+3$ |
|$a$    |$a$    |$a$    |       |$a$    |$3a$   |
|$a$    |$a+2$  |$a+2$  |(*)    |$a+2$  |$3a+4$ |
|$a$    |$a$    |$a+1$  |       |$a+1$  |$3a+1$ |
|$a$    |$a$    |$a+2$  |(*)    |$a+2$  |$3a+2$ |
|$a$    |$a+1$  |$a+1$  |       |$a+1$  |$3a+2$ |
