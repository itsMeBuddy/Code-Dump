Problem
Chef has an array AA of length NN.

In one operation, Chef can remove any one element from the array.

Determine the minimum number of operations required to make all the elements same.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer NN —the length of Array AA.
Next line contains NN space-separated integers A_1, A_2, A_3, \dots, A_NA 
1
​
 ,A 
2
​
 ,A 
3
​
 ,…,A 
N
​
  - denoting the array AA.
Output Format
For each test case, output the minimum number of operations required to make all the elements same.

Constraints
1 \leq T \leq 40001≤T≤4000
1 \leq N \leq 10^51≤N≤10 
5
 
1 \leq A_i \leq N1≤A 
i
​
 ≤N
Sum of NN over all test cases do not exceed 3 \cdot 10^53⋅10 
5
 
Sample 1:
Input
Output
4
3
3 3 3
6
1 3 2 1 2 2
4
1 2 1 2
5
1 3 2 4 5
0
3
2
4
Explanation:
Test case 11: All the elements are already same. Thus we need to perform zero operations.

Test case 22: We remove the elements A_1, A_2,A 
1
​
 ,A 
2
​
 , and A_4A 
4
​
  using three operations. The array becomes [2, 2, 2][2,2,2] where all elements are same.

Test case 33: We remove the elements A_1A 
1
​
  and A_3A 
3
​
  using two operations. The array becomes [2, 2][2,2] where all elements are same.

Test case 44: We remove the elements A_1, A_2, A_3,A 
1
​
 ,A 
2
​
 ,A 
3
​
 , and A_4A 
4
​
  using four operations. The array becomes [5][5].

