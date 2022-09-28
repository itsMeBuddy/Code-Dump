Problem
Chef has an array AA of length NN. In one operation, Chef can choose any element A_iA 
i
​
  and split it into two positive integers XX and YY such that X+Y = A_iX+Y=A 
i
​
 .
Note that the length of array increases by 11 after every operation.

Determine the minimum numbers of operations required by Chef to make parity of all the elements same.

It is guaranteed that parity of all the elements can be made equal after applying the above operation zero or more times.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer NN — the length of array AA.
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
For each test case, output the minimum number of operations required to make parity of all elements same.

Constraints
1 \leq T \leq 40001≤T≤4000
1 \leq N \leq 10^51≤N≤10 
5
 
1 \leq A_i \leq 10^91≤A 
i
​
 ≤10 
9
 
Sum of NN does not exceed 2 \cdot 10^52⋅10 
5
 
Sample 1:
Input
Output
2
4
1 3 5 7
3
1 2 3
0
1
Explanation:
Test case 11: All the elements have the same parity since all are odd. Thus, we need zero operations.

Test case 22: In one operation, we can split the element A_2 = 2A 
2
​
 =2 to X = 1X=1 and Y = 1Y=1 such that X+Y = 2X+Y=2. Thus, the array now becomes A = [1, 1, 1, 3]A=[1,1,1,3]. All the elements have the same parity since all are odd. Thus, we need only one operation.