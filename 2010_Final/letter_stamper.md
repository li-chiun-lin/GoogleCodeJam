# Problem

Roland is a high-school math teacher. Every day, he gets hundreds of papers from his students. For each paper, he carefully chooses a letter grade: 'A', 'B' or 'C'. (Roland's students are too smart to get lower grades like a 'D' or an 'F'). Once the grades are all decided, Roland passes the papers onto his assistant - you. Your job is to stamp the correct grade onto each paper.

You have a low-tech but functional letter stamp that you use for this. To print out a letter, you attach a special plate to the front of the stamp corresponding to that letter, dip it in ink, and then apply it to the paper.

The interesting thing is that instead of removing the plate when you want to switch letters, you can just put a new plate on top of the old one. In fact, you can think of the plates on the letter stamp as being a stack, supporting the following operations:

- Push a letter on to the top of the stack. (This corresponds to attaching a new plate to the front of the stamp.)
- Pop a letter from the top of the stack. (This corresponds to removing the plate from the front of the stamp.)
- Print the letter on the top of the stack. (This corresponds to actually using the stamp.) Of course, the stack must actually have a letter on it for this to work.

Given a sequence of letter grades ('A', 'B', and 'C'), how many operations do you need to print the whole sequence in order? The stack begins empty, and you must empty it when you are done. However, you have unlimited supplies of each kind of plate that you can use in the meantime.

For example, if you wanted to print the sequence "ABCCBA", then you could do it in 12 operations, as shown below:

| Operation | Printed so far  | Stack |
| ---       | ---             | ---   |
|0. -       | -               | -     |
|1. Push A  | -               | A     |
|2. Print   | A               | A     |
|3. Push B  | A               | AB    |
|4. Print   | AB              | AB    |
|5. Push C  | AB              | ABC   |
|6. Print   | ABC             | ABC   |
|7. Print   | ABCC            | ABC   |
|8. Pop     | ABCC            | AB    |
|9. Print   | ABCCB           | AB    |
|10. Pop    | ABCCB           | A     |
|11. Print  | ABCCBA          | A     |
|12. Pop    | ABCCBA          | -     |

## Input

The first line of the input file contains the number of cases, $T$. $T$ test cases follow, one per line.  
Each of these lines contains a single string $S$, representing the sequence of characters that you want to print out in order.
