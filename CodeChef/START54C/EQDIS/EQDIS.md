Problem
Let F(S)F(S) denote the number of distinct elements in the array SS. For example, F([1, 2, 3, 2]) = 3, F([1, 2]) = 2.F([1,2,3,2])=3,F([1,2])=2.

You are given an array AA containing NN integers. Find if it is possible to divide the elements of the array AA into two arrays BB and CC such that :

Every element of the array AA belongs either to array BB or to array CC.
F(B) = F(C)F(B)=F(C).
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer NN — the length of the array AA.
The next line contains NN space-separated integer A_1, A_2, \dots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
 , denoting the elements of the array AA.
Output Format
For each test case, print YES if it is possible to divide the elements of the array AA into two arrays B, CB,C satisfying all the conditions and NO otherwise.

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

Constraints
1 \leq T \leq 10^41≤T≤10 
4
 
2 \leq N \leq 10^52≤N≤10 
5
 
1 \leq A_i \leq N1≤A 
i
​
 ≤N
The sum of NN over all test cases won't exceed 2\cdot 10^52⋅10 
5
 .
Sample 1:
Input
Output
3
2
1 2
3
1 2 3
4
3 1 1 2
YES
NO
YES
Explanation:
Test case 11: One possible division is B = [1], C = [2]B=[1],C=[2]. Here F(B) = F(C) = 1.F(B)=F(C)=1.

Test case 22: There is no way to distribute the elements of the array A = [1, 2, 3]A=[1,2,3] satisfying all the conditions.

Test case 33: One possible division is B = [3, 1], C = [1, 2]B=[3,1],C=[1,2]. Here F(B) = F(C) = 2.F(B)=F(C)=2.