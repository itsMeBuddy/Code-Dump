Problem
Chef has a binary string SS of length NN.

In one operation, Chef can:

Select two indices ii and jj (1 \le i, j \le N, i \ne j)(1≤i,j≤N,i=j) and flip S_iS 
i
​
  and S_jS 
j
​
 . (i.e. change 00 to 11 and 11 to 00)
For example, if S = 10010S=10010 and chef applys operation on i = 1i=1 and j = 3j=3 then: \underline{1}0\underline{0}10 \rightarrow 00110 
1
​
 0 
0
​
 10→00110.

Find if it is possible to convert SS to a palindrome by applying the above operation any (possibly zero) number of times.

Note: A string is called a palindrome if it reads the same backwards and forwards, for e.g. 1000110001 and 01100110 are palindromic strings.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer NN — the length of the binary string SS.
The second line of each test case contains a binary string SS of length NN containing 00s and 11s only.
Output Format
For each test case, output YES if it is possible to convert SS to a palindrome. Otherwise, output NO.

You can print each character of the string in uppercase or lowercase. For example, the strings YES, yes, Yes, and yEs are all considered the same.

Constraints
1 \leq T \leq 10^51≤T≤10 
5
 
1 \leq N \leq 10^51≤N≤10 
5
 
SS contains 00 and 11 only.
Sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10 
5
 .
Sample 1:
Input
Output
3
6
101011
2
01
7
1110000
YES
NO
YES
Explanation:
Test case 1: We can perform the following operation:

Select i = 3i=3 and j = 5j=5. Then 10\underline{1}0\underline{1}1 \rightarrow 10000110 
1
​
 0 
1
​
 1→100001, which is a palindrome.
Test case 2: It can be proven that we can not make SS a palindrome using the given operation.

Test case 3: We can perform the following operations:

Select i = 4i=4 and j = 5j=5. Then 111\underline{0}\underline{0}00 \rightarrow 1111100111 
0
​
  
0
​
 00→1111100
Select i = 6i=6 and j = 7j=7. Then 11111\underline{0}\underline{0} \rightarrow 111111111111 
0
​
  
0
​
 →1111111, which is a palindrome.
