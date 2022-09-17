Problem
In an attempt to reduce the growing population, Archer was asked to come up with a plan. Archer being as intelligent as he is, came up with the following plan:

If NN children, with names C*{1}, C*{2}, ... , C*{N}C
1
​
,C
2
​
,...,C
N
​
, are born to parents with names AA and BB, and you consider CC to be the concatenation of all the names of the children, i.e. C = C*{1} + C*{2} + ... + C*{N}C=C
1
​
+C
2
​
+...+C
N
​
(where ++ is concatenation operator), then CC should be a substring of one of the permutations of A + BA+B.

You are given the task to verify whether the names parents propose to give their children are in fact permissible by Archer's plan or not.

Input
The first line contains an integer TT, the number of test cases. TT test cases follow. Each test case stats with a line containing two space separated strings AA and BB, denoting the names of the parents. The next line contains a single integer NN denoting the number of children AA and BB are planning to have. Following this are NN lines, the i^{th}i
th
line containing C\_{i}C
i
​
, the proposed name for the i^{th}i
th
child.

Output
For each test case output a single line containing YESYES if the names are permissible by Archer's plan, otherwise print NONO.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10001≤N≤1000
The lengths of all the strings including AA, BB, and all C\_{i}C
i
​
will be in the range [1, 40000][1,40000], both inclusive. All these strings will contain only lowercase English letters.
The combined lengths of all names of children will not exceed the combined length of the names of their parents.
Sample 1:
Input
Output
3
tom marvoloriddle
2
lord
voldemort
cheap up
1
heapcup
bruce wayne
2
bat
man
YES
YES
NO
Explanation:
Let YY denote the concatenation of names of all the children, and XX denote the concatenation of the names of the parents.

Case 1: Here XX = "tommarvoloriddle", and YY = "lordvoldemort". Consider ZZ = "iamlordvoldemort". It is not difficult to see that ZZ is a permutation of XX and YY is a substring of ZZ. Hence YY is a substring of a permutation of XX, so the answer is "YES".

Case 2: Here XX = "cheapup", and YY = "heapcup". Since YY in itself is a permutation of XX, and as every string is a substring of itself, YY is a substring of XX and also a permutation of XX. Hence "YES".

Case 3: Here XX = "brucewayne", and YY = "batman". As "t" is not present in XX, "t" wont be present in any permutation of XX, hence the answer is "NO".
