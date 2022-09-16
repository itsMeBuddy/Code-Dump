Problem
You are given an array AA of length NN.

The interesting value of a subarray is defined as the product of the maximum and minimum elements of the subarray.

Find the minimum and maximum interesting value over all subarrays for the given array.

Note: A subarray is obtained by deletion of several (possibly zero) elements from the beginning of the array and several (possibly zero) elements from the end of the array.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first line of each test case contains an integer NN - the length of the array AA.
The second line of each test case contains NN space-separated integers A_1,A_2,\ldots,A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .
Output Format
For each test case, output two space-separated integers on a new line the minimum and maximum interesting value over all subarrays for the given array.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10^51≤N≤10 
5
 
-10^9 \leq A_i \leq 10^9−10 
9
 ≤A 
i
​
 ≤10 
9
 
The sum of NN over all test cases won't exceed 3 \cdot 10^53⋅10 
5
 .
Sample 1:
Input
Output
2
2
2 2
3
5 0 9
4 4
0 81
Explanation:
Test case 11: The minimum interesting value possible is 44. A subarray with interesting value equal to 44 is [2,2][2,2]. Here, both minimum and maximum elements of the subarray are 22. It can be proven that no subarray of the array has interesting value less than 44.
The maximum interesting value possible is 44. A subarray with interesting value equal to 44 is [2,2][2,2]. Here, both minimum and maximum elements of the subarray are 22. It can be proven that no subarray of the array has interesting value greater than 44.

Test case 22: The minimum interesting value possible is 00. A subarray with interesting value equal to 00 is [5, 0, 9][5,0,9]. Here, minimum element is 00 and maximum element is 99. It can be proven that no subarray of the array has interesting value less than 00.
The maximum interesting value possible is 8181. A subarray with interesting value equal to 8181 is [9][9]. Here, both minimum and maximum elements of the subarray are 99. It can be proven that no subarray of the array has interesting value more than 8181.