Problem
Chef has an array consisting of N + K - 1N+K−1 integers. The array contains only the first NN positive odd numbers. Each number appears exactly once, except for one number which appears exactly KK times. The sum of integers in Chef's array is equal to SS.

For example, for N = 3N=3, K = 2K=2, the possible arrays could be [1, 1, 3, 5][1,1,3,5], [3, 1, 3, 5][3,1,3,5], [5, 3, 5, 1][5,3,5,1]. For N = 1N=1, K = 3K=3, there is only one possible array: [1, 1, 1][1,1,1].

Chef gives you three integers NN, KK and SS and asks you to find the only element which appears KK times in his array.

It is guaranteed that for the given input, there exists a valid array consisting of N + K -1N+K−1 elements with a sum exactly equal to SS.

Input Format
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains three space-separated integers N, K, SN,K,S.
Output Format
For each test case, print a single line containing the integer which appeared KK times in Chef's array.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq N \leq 10^41≤N≤10 
4
 
1 \leq S \leq 10^91≤S≤10 
9
 
2 \leq K \leq 10^42≤K≤10 
4
 
Sample 1:
Input
Output
3
3 2 14
5 4 28
2 3 10
5
1
3
Explanation:
Test case 11: Chef's array could be [5, 3, 5, 1][5,3,5,1].

Test case 33: Chef's array could be [3, 1, 3, 3][3,1,3,3].

