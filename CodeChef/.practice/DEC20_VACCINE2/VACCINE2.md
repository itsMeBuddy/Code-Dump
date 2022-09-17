Problem
Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
Finally, a COVID vaccine is out on the market and the Chefland government has asked you to form a plan to distribute it to the public as soon as possible. There are a total of NN people with ages a_1, a_2, \ldots, a_Na
1
​
,a
2
​
,…,a
N
​
.

There is only one hospital where vaccination is done and it is only possible to vaccinate up to DD people per day. Anyone whose age is \ge 80≥80 or \le 9≤9 is considered to be at risk. On each day, you may not vaccinate both a person who is at risk and a person who is not at risk. Find the smallest number of days needed to vaccinate everyone.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains two space-separated integers NN and DD.
The second line contains NN space-separated integers a_1, a_2, \ldots, a_Na
1
​
,a
2
​
,…,a
N
​
.
Output
For each test case, print a single line containing one integer ― the smallest required number of days.

Constraints
1 \le T \le 101≤T≤10
1 \le N \le 10^41≤N≤10
4

1 \le D \le 10^51≤D≤10
5

1 \le a_i \le 1001≤a
i
​
≤100 for each valid ii
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
2
10 1
10 20 30 40 50 60 90 80 100 1
5 2
9 80 27 72 79
10
3
Explanation:
Example case 1: We do not need to worry about how the people are grouped, since only one person can be vaccinated in a single day. We require as many days as there are people.

Example case 2: There are two people at risk and three people who are not at risk. One optimal strategy is to vaccinate the two people at risk on day 11 and the remaining three on the next 22 days.
