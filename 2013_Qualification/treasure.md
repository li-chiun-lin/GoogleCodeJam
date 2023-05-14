# Problem

Following an old map, you have stumbled upon the Dread Pirate Larry's secret treasure trove!

The treasure trove consists of $N$ locked chests, each of which can only be opened by a key of a specific type. Furthermore, once a key is used to open a chest, it can never be used again. Inside every chest, you will of course find lots of treasure, and you might also find one or more keys that you can use to open other chests. A chest may contain multiple keys of the same type, and you may hold any number of keys.

You already have at least one key and your map says what other keys can be found inside the various chests. With all this information, can you figure out how to unlock all the chests?

For example, suppose the treasure trove consists of four chests as described below, and you began with exactly one key of type $1$:

|Chest Number  |  Key Type To Open Chest  |  Key Types Inside   |
|--------------|--------------------------|------------------   |
|1             |  1                       |  None               |
|2             |  1                       |  1, 3               |
|3             |  2                       |  None               |
|4             |  3                       |  2                  |

You can open all the chests in this example if you do them in the order 2, 1, 4, 3. If you start by opening chest $1$ first, then you will have used up your only key, and you will be stuck.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
Each test case begins with a single line containing two positive integers $K$ and $N$, representing the number of keys you start with and the number of chests you need to open.

This is followed by a line containing $K$ integers, representing the types of the keys that you start with.

After that, there will be $N$ lines, each representing a single chest.  
Each line will begin with integers $T_i$ and $K_i$, indicating the key type needed to open the chest and the number of keys inside the chest.  
These two integers will be followed by $K_i$ more integers, indicating the types of the keys contained within the chest.
