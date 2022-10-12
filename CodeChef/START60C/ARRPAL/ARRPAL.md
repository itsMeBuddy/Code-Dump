Problem
Chef has an array AA of size NN. He can perform the following operation on AA:

Select an ii (1 \le i \le N)(1≤i≤N) and for all 1 \le j \le i1≤j≤i, set A_j := A_j + 1A 
j
​
 :=A 
j
​
 +1 (i.e. add 11 to every element in the prefix of length ii).
Chef wants to convert AA to a palindrome by using the above operation minimum number of times. Can you help Chef?
If it is not possible to convert AA to a palindrome, output -1−1.

Note: An array is called palindrome if it reads the same backwards and forwards, for e.g. [1, 4, 1][1,4,1] and [7, 3, 3, 7][7,3,3,7] are palindromic arrays.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer NN — the size of the array AA.
The second line of each test case contains NN space-separated integers A_1, A_2, \dots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  denoting the array AA.
Output Format
For each test case, output the minimum number of operations required to convert AA to a palindromic array.

If it is not possible to do so, output -1−1.

Constraints
1 \leq T \leq 10^51≤T≤10 
5
 
1 \leq N \leq 3 \cdot 10^51≤N≤3⋅10 
5
 
1 \le A_i \le 10^91≤A 
i
​
 ≤10 
9
 
Sum of NN over all test cases does not exceed 3 \cdot 10^53⋅10 
5
 .
Sample 1:
Input
Output
3
4
4 2 2 4
5
5 4 3 2 1
4
1 2 3 4
0
-1
3
Explanation:
Test case 11: The given array is already a palindrome.

Test case 22: It can be proven that it is not possible to convert AA to a palindromic array using the given operation.

Test case 33: We can perform the following operations:

Select i = 1i=1, [1, 2, 3, 4] \rightarrow [2, 2, 3, 4][1,2,3,4]→[2,2,3,4]
Select i = 2i=2, [2, 2, 3, 4] \rightarrow [3, 3, 3, 4][2,2,3,4]→[3,3,3,4]
Select i = 1i=1, [3, 3, 3, 4] \rightarrow [4, 3, 3, 4][3,3,3,4]→[4,3,3,4]
