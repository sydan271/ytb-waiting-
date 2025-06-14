# ytb-waiting-
ytb waiting is boring
# D. Youtube

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes

---

An wants to watch a YouTube video of duration `K` minutes, but their internet connection is very slow.  
So, An allows the video to preload for a while before watching to avoid interruptions.

- While waiting, the video is downloaded at a speed of `A` minutes of video per real minute (`A > 1`).
- While watching, the video continues to download at a slower speed of `B` minutes of video per minute (`B < 1`).

**Question:** How long (in minutes) does An have to wait before starting the video, so that they can watch the entire video without being interrupted by buffering?

## Input

A single line containing three real numbers `K`, `A`, and `B`, in that order.

It is guaranteed that:  
- \\( 0 < B < 1 < A \\leq 10^6 \\)  
- \\( K \\leq 10^6 \\)

## Output

Output a single real number — the minimum waiting time (in minutes).  
The answer is considered correct if it differs from the judge’s output by at most \\( 10^{-6} \\).

## Example

**Input**
10 2 0.5 


**Output**
2.500000
