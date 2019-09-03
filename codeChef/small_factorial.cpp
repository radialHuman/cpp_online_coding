/*
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6
*/

#include <iostream>

int factorial(int n)
{
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}

int main() {
	// your code goes here
	int t,f;
	std::cin >> t;
	for(auto i = 0; i<t; i++)
	{   
	    std::cin >> f;
	    std::cout << factorial(f) << std::endl;
	}
}


// did not work though (???)