Problem
You are given an array AA of length NN.

A pair (i, j)(i,j) (1\le i\lt j \le N)(1≤i<j≤N) is said to be good if gcd(A_i, A_j) = lcm(A_i, A_j)gcd(A 
i
​
 ,A 
j
​
 )=lcm(A 
i
​
 ,A 
j
​
 ). Here gcdgcd denotes the greatest common divisor and lcmlcm denotes least common multiple.

Find the total number of good pairs present in the given array.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first line of each test case contains an integer NN - the length of the array AA.
The second line of each test case contains NN space-separated integers A_1,A_2,\ldots,A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .
Output Format
For each test case, output on a new line the total number of such good pairs possible in the given array.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10^51≤N≤10 
5
 
1 \leq A_i \leq 10^91≤A 
i
​
 ≤10 
9
 
The sum of NN over all test cases won't exceed 3 \cdot 10^53⋅10 
5
 .
Sample 1:
Input
Output
5
2
5 9
5
1 5 5 5 9
8
2 5 5 2 9 9 9 12
4
12 12 18 18
5
12 15 10 5 9
0
3
5
2
0
Explanation:
Test case 11: No good pair is present.

Test case 22: The good pairs (i, j)(i,j) are: (2, 3), (3, 4),(2,3),(3,4), and (2, 4)(2,4). To elaborate, gcd(A_2, A_3) = lcm(A_2, A_3) = 5gcd(A 
2
​
 ,A 
3
​
 )=lcm(A 
2
​
 ,A 
3
​
 )=5.

Test case 33: The good pairs (i, j)(i,j) are: (1, 4), (2, 3), (5, 6), (6, 7),(1,4),(2,3),(5,6),(6,7), and (5, 7)(5,7). To elaborate, gcd(A_1, A_4) = lcm(A_1, A_4) = 2gcd(A 
1
​
 ,A 
4
​
 )=lcm(A 
1
​
 ,A 
4
​
 )=2.

Test case 44: The good pair (i, j)(i,j) are: (1, 2),(1,2), and (3, 4)(3,4). To elaborate, gcd(A_3, A_4) = lcm(A_3, A_4) = 18gcd(A 
3
​
 ,A 
4
​
 )=lcm(A 
3
​
 ,A 
4
​
 )=18.

Test case 55: No good pair is present.