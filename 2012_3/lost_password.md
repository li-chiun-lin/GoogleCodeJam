# Problem

Ashish has forgotten his password. He remembers that he used the following algorithm to create his password: Ashish took up to k consecutive words from a passage of text, and took the first letter from each word. Then, he might have changed some of the letters to their "l33tspeak" equivalents. Specifically, he might have changed "o" to "0", "i" to "1", "e" to "3", "a" to "4", "s" to "5", "t" to "7", "b" to "8" and/or "g" to "9".

For example, if Ashish took his password from the first sentence of The Fellowship of the Ring -- "This book is largely concerned with Hobbits, and from its pages a reader may discover much of their character and a little of their history" -- Ashish would have reduced that to "tbilcwhafiparmdmotcaaloth". Then the password might be "tbilcwh", "7b1lcwh4f", "a", "4", or "4al07h", etc.

Ashish has a special extension installed in his browser that will prevent his computer from uploading any string that contains his password. In order to figure out which passage of text he took his password from, Ashish has created a webpage to take advantage of this extension. Every second, the webpage will tell the browser to post a "password string" for a new passage of text: a string that contains all of the possible passwords that Ashish could have chosen from that passage of text. As soon as his browser fails to post such a string, Ashish will know where he took his password from.

For example, if k = 2 and the passage of text contains words starting with the letters "google", then one password string for that passage is "goo0og00gle9o909l3". All substrings of length ≤ 2 from the original string, and all of their l33tspeak equivalents, are contained in the new string.

Given the first letters of the words in a passage of text, what is the minimum number of characters in the "password string" of that passage?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines. The first line contains the integer k. The second line contains a string S, representing the first letters of the words in a passage of text. S contains only the characters 'a' - 'z', with no spaces.
