Problem
Chef has two integers AA and BB. In one operation he can choose any integer d,d, and make one of the following two moves :

Add dd to AA and subtract dd from BB.
Add dd to BB and subtract dd from AA.
Chef is allowed to make as many operations as he wants. Can he make AA and BB equal?

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers A, BA,B.
Output Format
For each test case, if Chef can make the two numbers equal print YES else print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings yEs, Yes, YeS, and YES will all be treated as identical).

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq A,B \leq 10001≤A,B≤1000
Sample 1:
Input
Output
2
3 3
1 2
Yes
No
Explanation:
Test case 11: Since AA and BB are already equal, Chef does not need any operations.

Test case 22: It can be shown that AA and BB can never be made equal using any number of given operations.
