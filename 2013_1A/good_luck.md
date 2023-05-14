# Problem

Maryam and Peiling have recently been practicing a new number trick, and they need your help to get it right. The trick goes as follows: Maryam starts by picking $N$ independent random integer numbers, each between $2$ and $M$, inclusive, appearing with equal probability, and writes them down on $N$ cards, one number per card. Note that some numbers might be equal. Then, she repeats the following $K$ times: take a random subset of cards (each card is taken with probability $0.5$), and write down the product of the numbers on those cards. Having done all that, she shows all $K$ products to Peiling, and Peiling's goal is to guess what the original $N$ numbers were, knowing just $N$, $M$, and the products.

An example game with $N=3, M=4, K=4$ might go like this: first, Maryam picks 3 random numbers between $2$ and $4$, inclusive - let's say she randomly chose $A_1=3, A_2=3$ and $A_3=4$. Then, she calculates four products of random subsets of those three numbers. For example, let's say those products are $A_1 \times A_2=9, A_3=4, A_1 \times A_2 \times A_3=36$, and $1=1$ (the last product has no numbers in it, so it's equal to $1$). Peiling receives numbers $9,4,36,1$ from her, and she's also told that $N=3$ and $M=4$. In this case, just seeing the number $36$ is enough to find what the original numbers were, since the only way to represent that as a product of up to $3$ numbers, each up to $4$, is $3 \times 3 \times 4$. So Peiling says that the original numbers were $3$, $3$ and $4$, and the audience is impressed.

In some other cases, guessing the original numbers is not as simple. For example, it might happen that all products are equal to $1$. In that case there is no way to know anything about the hidden numbers, so Peiling cannot always be right. However, Peiling knows that Maryam follows the procedure exactly as described above: she selects the first $N$ numbers as independent uniform integers between $2$ and $M$, and then selects $K$ independent random subsets, picking each number into each subset independently with probability $0.5$. Help Peiling use that knowledge to make better guesses!

## Input

The first line of the input gives the number of test cases, $T$, which is always equal to $1$.  
The second line of the input file contains four space-separated integers $R, N, M$ and $K$, in that order.  
The next $R$ lines describe one set of $K$ products each.  
Each of those lines contains $K$ space-separated integers — the products that Maryam passes to Peiling. It is guaranteed that all sets in the input are generated independently randomly according to the procedure from the problem statement.
