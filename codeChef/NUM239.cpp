/*
Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2, 3 or 9.

Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers L and R.
Output
For each test case, print a single line containing one integer — the number of pretty numbers between L and R.

Constraints
1≤T≤100
1≤L≤R≤105
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
1 10
11 33
*/

#include <iostream>

int main()
{
    int lower,upper,c=0,trails;
    std::cin >> trails >> lower >> upper ;
    while(trails--)
        for (int i =lower; i <=upper; i++)
            if(i%10==2 || i%10==3 || i%10==9)
                c++;
    std::cout << c;
}