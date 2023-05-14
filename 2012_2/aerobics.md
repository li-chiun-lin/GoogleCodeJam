# Problem

The aerobics class begins. The trainer says, "Please position yourselves on the training mat so that each one of you has enough space to move your arms around freely, and not hit anybody else." People start milling around on the mat, trying to position themselves properly. Minutes pass, and finally the trainer is so annoyed that he asks you to write a program that will position all the people correctly, hoping it will be quicker than letting them figure it out for themselves!

You are given the dimensions (width and length) of the mat on which the class takes place. For every student, there is a circular area she has to have for herself, with radius equal to the reach of her arms. These circles can not intersect, though they can touch; and the center of each circle (where the student stands) has to be on the mat. Note that the arms can reach outside the mat. You know that there's plenty of space on the mat — the area of the mat is at least five times larger than the total area of the circles required by all the people in the class. It will always be possible for all the people to position themselves as required.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines. The first line contains three integers: N, W and L, denoting the number of students, the width of the mat, and the length of the mat, respectively. The second line contains N integers ri, denoting the reach of the arms of the ith student.
