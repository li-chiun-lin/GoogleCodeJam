# Problem

You are walking through the mountains. It turns out that in this mountain range there is a peak every kilometer, and there are no intermediate peaks. On every peak, you lie down for a rest, look forward, and perceive one of the peaks in front of you to be the highest one. The peak that looks like it's the highest might not really be the highest, for two reasons: there could be a higher peak that is obscured by another peak that's closer to you, and not as high; or you could be looking down, and a faraway peak could look higher than a nearby one.

To be precise, when we say that peak B looks like it's the highest from peak A we mean that B is further down the road than A; all peaks between A and B are below the line connecting the peaks A and B; and all the peaks that are further than B are below or on this line.

You don't know how high each peak is, but you have a very good memory; you've been on all the peaks; and you remember which peak looks like it's the highest from each of them. You would like to invent a set of heights for the peaks that is consistent with that information. Note that you were lying down when looking, so we assume you always looked from the ground level on each peak.


In this example, the fourth peak looks like it's the highest from the first and third peaks. When you're lying on the second peak, you can't see the fourth peak; the third one obscures it, and looks like it's the highest.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines. The first contains one number, N, the number of peaks in the range. You began your trip on peak 1 and went forward to peak N. The next line contains N-1 numbers xi. The i-th number denotes the index of the peak that appeared to be the highest from peak i (note that peak N is the last peak, so there are no other peaks to see from there).
