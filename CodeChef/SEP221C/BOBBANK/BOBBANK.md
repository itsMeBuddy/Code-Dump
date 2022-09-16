Problem
Bob has an account in the Bobby Bank. His current account balance is WW rupees.

Each month, the office in which Bob works deposits a fixed amount of XX rupees to his account.
YY rupees is deducted from Bob's account each month as bank charges.

Find his final account balance after ZZ months. Note that the account balance can be negative as well.

Input Format
The first line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers W,X,Y,W,X,Y, and ZZ — the initial amount, the amount deposited per month, the amount deducted per month, and the number of months.
Output Format
For each test case, output in a single line the final balance in Bob's account after ZZ months.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq W,X,Y,Z \leq 10^41≤W,X,Y,Z≤10 
4
 
Sample 1:
Input
Output
3
100 11 1 10
999 25 36 9
2500 100 125 101
200
900
-25
Explanation:
Test case 11: Bob's current account balance is 100100. At the end of each month Bob gets Rs 1111 and pays Rs 11, thus gaining 1010 per month. Thus, at the end of 1010 months, Bob will have 100 + 10 \times 10 = 200100+10×10=200.

Test case 22: Bob's current account balance is 999999. At the end of each month Bob gets Rs 2525 and pays Rs 3636, thus losing 1111 per month. Thus, at the end of 99 months, Bob will have 999 - 11 \times 9 = 900999−11×9=900.

Test case 33: Bob's current account balance is 25002500. At the end of each month Bob gets Rs 100100 and pays Rs 125125, thus losing 2525 per month. Thus, at the end of 101101 months, Bob will have 2500 - 25 \times 101 = -252500−25×101=−25.