Problem
Chef has a stick of length LL. Chef wants to break the stick into KK parts such that each part has a non-zero length.

Let the lengths of the KK parts be A_1, A_2, \ldots, A_KA 
1
​
 ,A 
2
​
 ,…,A 
K
​
  (Note that A_1 + A_2 + \ldots + A_K = LA 
1
​
 +A 
2
​
 +…+A 
K
​
 =L and A_iA 
i
​
  is a positive integer for all ii). Chef wants to minimize the value of \displaystyle \sum_{i = 1}^{K - 1}|A_{i + 1} - A_i| 
i=1
∑
K−1
​
 ∣A 
i+1
​
 −A 
i
​
 ∣. Can you help Chef? (Here |x|∣x∣ denotes the absolute value of xx)

Under the given constraints it will always be possible to break the stick into KK parts of non-zero lengths.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers LL and KK — the initial length of the stick and the number of parts Chef wants to break the stick into.
Output Format
For each test case, output the minimum value of \displaystyle \sum_{i = 1}^{K - 1}|A_{i + 1} - A_i| 
i=1
∑
K−1
​
 ∣A 
i+1
​
 −A 
i
​
 ∣.

Constraints
1 \leq T \leq 10^41≤T≤10 
4
 
2 \le K \le L \le 10^92≤K≤L≤10 
9
 
Sample 1:
Input
Output
2
4 3
2 2
1
0
Explanation:
Test Case 1: It is optimal to break the stick of length 44 into 33 parts in the following manner: [2, 1, 1][2,1,1]. The value of \displaystyle \sum_{i = 1}^{K - 1}|A_{i + 1} - A_i| = |1 - 2| + |1 - 1| = 1 
i=1
∑
K−1
​
 ∣A 
i+1
​
 −A 
i
​
 ∣=∣1−2∣+∣1−1∣=1.

Test Case 2: It is optimal to break the stick of length 22 into 22 parts in the following manner: [1, 1][1,1]. The value of \displaystyle \sum_{i = 1}^{K - 1}|A_{i + 1} - A_i| = |1 - 1| = 0 
i=1
∑
K−1
​
 ∣A 
i+1
​
 −A 
i
​
 ∣=∣1−1∣=0.