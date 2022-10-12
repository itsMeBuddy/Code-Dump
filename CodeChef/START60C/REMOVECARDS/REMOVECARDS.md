Problem
You have NN cards placed in front of you on the table. The i^{th}i 
th
  card has the number A_iA 
i
​
  written on it.

In one move, you can remove any one card from the remaining cards on the table.

Find the minimum number of moves required so that all the cards remaining on the table have the same number written on them.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer NN — the number of cards on the table.
The second line of each test case contains NN space-separated integers A_1, A_2, \dots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  where A_iA 
i
​
  is the number written on the i^{th}i 
th
  card.
Output Format
For each test case, output the minimum number of moves required so that all the cards remaining on the table have the same number written on them.

Constraints
1 \leq T \leq 1001≤T≤100
1 \le N \le 1001≤N≤100
1 \le A_i \le 101≤A 
i
​
 ≤10
Sample 1:
Input
Output
3
5
1 1 2 2 3
4
8 8 8 8
6
5 6 7 8 9 10
3
0
5
Explanation:
Test case 11: The minimum number of moves required such that all remaining cards have same values is 33:

Move 11: Remove a card with number 11. Remaining cards are [1, 2, 2, 3][1,2,2,3].
Move 22: Remove a card with number 11. Remaining cards are [2, 2, 3][2,2,3].
Move 33: Remove a card with number 33. Remaining cards are [2, 2][2,2].
Test case 22: All cards have the same number initially. Thus, no moves are required.

Test case 33: The minimum number of moves required such that all remaining cards have same values is 55:

Move 11: Remove a card with number 55. Remaining cards are [6, 7, 8, 9, 10][6,7,8,9,10].
Move 22: Remove a card with number 66. Remaining cards are [7, 8, 9, 10][7,8,9,10].
Move 33: Remove a card with number 77. Remaining cards are [8, 9, 10][8,9,10].
Move 44: Remove a card with number 88. Remaining cards are [9, 10][9,10].
Move 55: Remove a card with number 99. Remaining cards are [10][10].
