Problem
Chef has a string SS with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 22 in which all its characters are vowels.

Determine whether Chef is happy or not.

Note that, in english alphabet, vowels are a, e, i, o, and u.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string SS.
Output Format
For each test case, if Chef is happy, print HAPPY else print SAD.

You may print each character of the string in uppercase or lowercase (for example, the strings hAppY, Happy, haPpY, and HAPPY will all be treated as identical).

Constraints
1 \leq T \leq 10001≤T≤1000
3 \leq |S| \leq 10003≤∣S∣≤1000, where |S|∣S∣ is the length of SS.
SS will only contain lowercase English letters.
Sample 1:
Input
Output
4
aeiou
abxy
aebcdefghij
abcdeeafg
Happy
Sad
Sad
Happy
Explanation:
Test case 11: Since the string aeiou is a contiguous substring and consists of all vowels and has a length \gt 2>2, Chef is happy.

Test case 22: Since none of the contiguous substrings of the string consist of all vowels and have a length \gt 2>2, Chef is sad.

Test case 33: Since none of the contiguous substrings of the string consist of all vowels and have a length \gt 2>2, Chef is sad.

Test case 44: Since the string eea is a contiguous substring and consists of all vowels and has a length \gt 2>2, Chef is happy.