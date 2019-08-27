#include <iostream>
#include <math.h>

int main()
{
	int n,m,a;
	std::cout << "Enter the length: \n";
	std::cin>> n;
	std::cout << "Enter the length: \n";
	std::cin>> m;
	std::cout << "Enter the square length: \n";
	std::cin>> a;
	// int n=7;
	// int m=8;
	// int a = 4;
	// if(m<4)
	// 	m=4;
	// if(n<4)
	// 	n=4;
	std::cout << "Total squares needed : " << round(m/a)+round(n/a)+2 << std::endl;
	system("pause");

}

/*
OUTPUT
Enter the length:
100
Enter the length:
37
Enter the square length:
7
Total squares needed : 21
*/


