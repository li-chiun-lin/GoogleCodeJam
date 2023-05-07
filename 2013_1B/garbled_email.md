# Problem

Gagan just got an email from her friend Jorge. The email contains important information, but unfortunately it was corrupted when it was sent: all of the spaces are missing, and after the removal of the spaces, some of the letters have been changed to other letters! All Gagan has now is a string S of lower-case characters.

You know that the email was originally made out of words from the dictionary described below. You also know the letters were changed after the spaces were removed, and that the difference between the indices of any two letter changes is not less than 5. So for example, the string "code jam" could have become "codejam", "dodejbm", "zodejan" or "cidejab", but not "kodezam" (because the distance between the indices of the "k" change and the "z" change is only 4).

What is the minimum number of letters that could have been changed?

## Dictionary

The dictionary contains W words of at least 1 and at most 10 lower-case characters and is given at the start of the input file. It is not a dictionary from any natural language, though it does contain some English words. The dictionary is the same for all test cases in a single input file. The dictionary is given in lexicographically increasing order and does not contain duplicate words.

## Input

The first line of the input gives the number of words in the dictionary, W. Each of the next W lines contains a string of lower-case characters a-z representing a word in the dictionary. The next line of the input gives the number of test cases, T. T test cases follow. Each test case consists of a single line containing a string S, consisting of lower-case characters a-z.
