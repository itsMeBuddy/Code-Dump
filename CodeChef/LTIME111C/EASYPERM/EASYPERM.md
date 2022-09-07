Problem
You are given an integer NN.

Construct any permutation AA of NN integers such that the value LCM(1 + A_1 , 2 + A_2, \ldots, N + A_N)LCM(1+A 
1
​
 ,2+A 
2
​
 ,…,N+A 
N
​
 ) is minimised.

Note:

LCMLCM denotes the least common multiple of the integers.
A permutation of NN integers contains all integers from 11 to NN exactly once.
Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains a single line of input, one integer NN.
Output Format
For each test case, output a permutation that minimises the value LCM(1 + A_1 , 2 + A_2, \ldots, N + A_N)LCM(1+A 
1
​
 ,2+A 
2
​
 ,…,N+A 
N
​
 ).

Constraints
1 \leq T \leq 10001≤T≤1000
2 \leq N \leq 10002≤N≤1000
Sample 1:
Input
Output
1
2
2 1 
Explanation:
Test case 11: The permutation for which the value is minimised is [2, 1][2,1]. The minimum value is LCM(1+2, 2+1) = LCM(3, 3) = 3LCM(1+2,2+1)=LCM(3,3)=3.