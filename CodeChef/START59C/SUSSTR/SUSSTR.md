Problem
Alice and Bob are playing a game with a binary string SS of length NN and an empty string TT.
They both take turns and Alice plays first.

In Alice's turn, she picks the first character of string SS, appends the character to either the front or back of string TT and deletes the chosen character from string SS.
In Bob's turn, he picks the last character of string SS, appends the character to either the front or back of string TT and deletes the chosen character from string SS.
The game stops when SS becomes empty.
Alice wants the resultant string TT to be lexicographically smallest, while Bob wants the resultant string TT to be lexicographically largest possible.

Find the resultant string TT, if both of them play optimally.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer NN - the length of the string SS.
The next line is the binary string SS.
Output Format
For each test case, print the the resultant string TT, if both of them play optimally.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10001≤N≤1000
SS can only contain the characters 00 or 11.
Sample 1:
Input
Output
4
2
10
4
0001
6
010111
10
1110000010
10
0100
101101
0011011000
Explanation:
Test case 11: Alice picks the first bit which is 11 and appends it to the empty string TT. Bob then picks the last bit 00 and appends it to the back of TT making the resultant string to be 1010.

Test case 22:

Alice picks 00 and adds it to TT. Thus, SS becomes 001001 and TT becomes 00.
Bob picks 11 and adds it to front of TT. Thus, SS becomes 0000 and TT becomes 1010.
Alice picks 00 and adds it to front of TT. Thus, SS becomes 00 and TT becomes 010010.
Bob picks 00 and adds it to back of TT. Thus, SS becomes empty and TT becomes 01000100.