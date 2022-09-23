Problem
JJ gives you a number NN and challenges you to construct a permutation PP of length NN such that:

|P_{i + 1} - P_i| \ge 2∣P 
i+1
​
 −P 
i
​
 ∣≥2 for all 1 \le i \le N - 11≤i≤N−1 (Here |x|∣x∣ denotes the absolute value of xx)
Can you complete JJ's challenge?

As a reminder, a permutation of length NN is an array where every integer from 11 to NN occurs exactly once.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer NN — the length of the permutation PP to be constructed.
Output Format
For each test case, output NN space-separated integers P_1, P_2, \ldots, P_NP 
1
​
 ,P 
2
​
 ,…,P 
N
​
  denoting the permutation PP which satisfies the given conditions.

If no such permutation exists, output -1−1.

If there are multiple answers, print any.

Constraints
1 \leq T \leq 10^51≤T≤10 
5
 
2 \leq N \leq 10^52≤N≤10 
5
 
Sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10 
5
 
Sample 1:
Input
Output
2
2
6
-1
1 4 2 5 3 6
Explanation:
Test Case 1: It can be proven that no permutation of length 22 exists that satisfies the given conditions.

Test Case 2: [1, 4, 2, 5, 3, 6][1,4,2,5,3,6] satisfies the given condition, since |P_{i + 1} - P_i| \ge 2∣P 
i+1
​
 −P 
i
​
 ∣≥2 for all 1 \le i \le N - 11≤i≤N−1