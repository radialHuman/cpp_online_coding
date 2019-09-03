/*
Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

Input:
First line will contain a number N.
Output:
Output a single line, the new value of the number.

Constraints
0≤N≤1000
Sample Input:
5
Sample Output:
4
*/

#include <iostream>

int main() {
	int input;
	std::cin >> input;
	if(input%4==0)
	    std::cout << input +1 << std::endl;
	else
	    std::cout << input -1 << std::endl;
	return 0;
}
