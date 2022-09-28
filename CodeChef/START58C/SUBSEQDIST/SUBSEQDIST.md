Problem
Chef has an array AA of length NN.

In one operation, Chef can choose any subsequence of the array and any integer XX and then add XX to all the elements of the chosen subsequence.

Determine the minimum number of operations required to make all the elements of the array distinct.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer NN — the length of Array AA.
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
For each test case, output the minimum number of operations required to make all the elements distinct.

Constraints
1 \leq T \leq 40001≤T≤4000
1 \leq N \leq 10^51≤N≤10 
5
 
1 \leq A_i \leq 10^91≤A 
i
​
 ≤10 
9
 
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
1 3 2 4 6
2
2
1
0
Explanation:
Test case 11:

Operation 11: Choose the subsequence \{A_1\}{A 
1
​
 } and add X = 1X=1 to the elements. The array becomes A = [4, 3, 3]A=[4,3,3].
Operation 22: Choose the subsequence \{A_2\}{A 
2
​
 } and add X = 2X=2 to the elements. The array becomes A = [4, 5, 3]A=[4,5,3].
Thus, we require, minimum 22 operations to make all the elements distinct.

Test case 22:

Operation 11: Choose the subsequence \{A_1, A_6\}{A 
1
​
 ,A 
6
​
 } and add X = 4X=4 to the elements. The array becomes A = [5, 3, 2, 1, 2, 6]A=[5,3,2,1,2,6].
Operation 22: Choose the subsequence \{A_3\}{A 
3
​
 } and add X = 5X=5 to the elements. The array becomes A = [5, 3, 7, 1, 2, 6]A=[5,3,7,1,2,6].
Thus, we require, minimum 22 operations to make all the elements distinct.

Test case 33:

Operation 11: Choose the subsequence \{A_3, A_4\}{A 
3
​
 ,A 
4
​
 } and add X = 2X=2 to the elements. The array becomes A = [1, 2, 3, 4]A=[1,2,3,4].
Thus, we require, minimum 11 operation to make all the elements distinct.

Test case 44: All the elements are distinct. We need zero operations.