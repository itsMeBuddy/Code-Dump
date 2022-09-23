Problem
You are given two numbers AA and BB along with an integer XX. In one operation you can do one of the following:

Set A = A + XA=A+X and B = B - XB=B−X
Set A = A - XA=A−X and B = B + XB=B+X
Determine if you can make AA and BB equal after applying the operation any number of times (possibly zero).

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers A, BA,B and XX — the parameters mentioned in the statement.
Output Format
For each test case, output YES if you can make AA and BB equal after applying the operation any number of times (possibly zero). Otherwise, output NO.

You can output each letter in any case i.e. YES, yes, yEs are all considered the same.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq A, B, X \leq 10^91≤A,B,X≤10 
9
 
Sample 1:
Input
Output
4
5 7 1
3 4 2
4 4 6
2 5 3
YES
NO
YES
NO
Explanation:
Test Case 1: The initial values of (A, B)(A,B) is (5, 7)(5,7). We can perform the following operation: (5,7) \xrightarrow{A = A + X, B = B - X} (6,6)(5,7) 
A=A+X,B=B−X
​
 (6,6).

Test Case 2: It can be proven that we can not make AA equal to BB using the given operations.

Test Case 3: AA and BB are already equal.