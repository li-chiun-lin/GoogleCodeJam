# Problem

You are following a prescribed training for weightlifting. The training consists of a series of exercises that you must do in order. Each exercise requires a specific set of weights to be placed on a machine.

There are $W$ types of different weights. For example, an exercise may require $3$ weights of type $A$ and $1$ weight of type $B$, while the next requires $2$ weights each of types $A$, $C$, and $D$.

```text
    D
    D
A   C
B   C
A   A
A   A
```

The weights are placed on the machine as a stack. Formally, with a single operation, you can either add a new weight of any type to the top of the stack, or remove the weight that is currently at the top of the stack.

You can load the weights for each exercise onto the machine's stack in any order. So, if you place the weight of type $B$ at the bottom in the first exercise of the example above, you will have to take all the weights off before putting on the weights for the second exercise. On the other hand, if you place the weight of type $B$ third from the bottom, you can leave two of the weights of type $A$ on the bottom of the stack to be part of the next exercise's set, saving you some time.

Given the amount of weights of each type needed for each exercise, find the minimum number of operations needed to do them all. You must complete the exercises in the order given. The machine stack starts out empty, and you must leave it empty after you finish with all your exercises.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
Each test case starts with a line containing 2 integers $E$ and $W$: the number of exercises and the number of types of weights. Weight types are numbered between $1$ and $W$. Then, $E$ lines follow.  
The $i$-th of these lines contains $W$ integers $X_{i,1},X_{i,2},…,X_{i,W}$ representing that the $i$-th exercise requires exactly $X_{i,j}$ weights of type $j$.
