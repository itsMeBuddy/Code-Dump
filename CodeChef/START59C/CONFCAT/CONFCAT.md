Problem
Chef initially had two non-empty arrays AA and BB, where both arrays contain distinct elements. Moreover, there is no common element in the arrays AA and BB.

Chef forms another array CC from the arrays AA and BB using the following process :

Let XX denote the leftmost element of array AA and YY denote the leftmost element of array BB.
If YY is smaller than XX, delete YY from BB and append it to the end of CC.
If XX is smaller than YY, delete XX from AA and append it to the end of CC.
If either array AA or BB becomes empty, append all the remaining elements of the other array to the end of CC.
Chef forgot the arrays AA and BB but remembers the array CC. Find any two valid non-empty arrays AA and BB that will yield the given array CC. If it is not possible, print -1−1.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a space-separated integer NN — the number of elements in array CC.
The next line contains NN space-separated integers denoting the elements of the array CC.
Output Format
For each test case, if a solutions exists, print any two valid arrays AA and BB along with their lengths respectively . For example, if A= [1,7]A=[1,7] and B =[4,10,2]B=[4,10,2], then print it as :

2 
1 7
3
4 10 2
Else, if answer doesn't exist, print -1−1 in a single line.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10^51≤N≤10 
5
 
-10^5 \leq C_i\leq 10^5−10 
5
 ≤C 
i
​
 ≤10 
5
 
The sum of NN over all test cases won't exceed 10^610 
6
 .
Sample 1:
Input
Output
2
6
7 6 3 8 2 9
2
2 1
3
7 6 3
3
8 2 9
-1
Explanation:
Test case 11: We have A = [7,6,3]A=[7,6,3] and B = [8,2,9]B=[8,2,9].

Move 11: X = 7X=7 and Y = 8Y=8. Since X\lt YX<Y, we delete XX and append it to CC. Thus, A = [6, 3], B = [8, 2, 9],A=[6,3],B=[8,2,9], and C = [7]C=[7].
Move 22: X = 6X=6 and Y = 8Y=8. Since X\lt YX<Y, we delete XX and append it to CC. Thus, A = [3], B = [8, 2, 9],A=[3],B=[8,2,9], and C = [7, 6]C=[7,6].
Move 33: X = 3X=3 and Y = 8Y=8. Since X\lt YX<Y, we delete XX and append it to CC. Thus, A = [], B = [8, 2, 9],A=[],B=[8,2,9], and C = [7, 6, 3]C=[7,6,3].
Now, since AA is empty, append all elements of BB to CC. Thus, C = [7, 6, 3, 8, 2, 9]C=[7,6,3,8,2,9].
Test case 22: It can be shown that there exist no valid non-empty arrays AA and BB.