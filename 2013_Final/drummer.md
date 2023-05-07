# Problem

The drummer has a very important role in any band -- keeping the rhythm. If the drummer's rhythm is uneven, it can ruin the entire performance.

You are the lead singer of a very popular rock band, and you have a bit of a problem. Your drummer has just quit the band to become a professional video gamer. You need to find a new drummer immediately. Fortunately, there is no shortage of candidates. Everyone wants a chance to join your band. Your task is to find the best drummer among the candidates, and you want the person who can keep the most consistent rhythm.

Your plan is as follows. You will ask each candidate to audition individually. During the audition, the candidate will play one drum by striking it with a drum stick several times. Ideally, the time difference between consecutive strikes should be exactly the same, producing a perfect rhythm. In a perfect rhythm, the drum strikes will have time stamps that follow an arithmetic progression like this: T0, T0 + K, T0 + 2*K, ..., T0 + (N - 1)*K.

In real life, of course, it is nearly impossible for a human to produce a perfect rhythm. Therefore, each candidate drummer will produce a rhythm that has an error E, such that each Ti differs by at most E from some perfect rhythm. Given a candidate's sequence of drum strikes, find the smallest possible E among all perfect rhythms that the candidate might have been trying to play.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each one consists of two lines and represents the audition of one candidate. The first line contains a single integer -- N. The next line contains N integers separated by spaces -- the time stamps, in milliseconds, of the drum strikes played by the candidate. The time stamps are in increasing order.
