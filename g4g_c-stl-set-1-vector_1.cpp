// Site: https://practice.geeksforgeeks.org/problems/c-stl-set-1-vector/1

#include <iostream>
#include <algorithm>
#include <vector>

void print_array(std::vector<int> v)
{
	std::for_each(v.begin(), v.end(), [](int i)->void {std::cout << i <<" ";});
	std::cout << std::endl;
}

template <class T>
void print(T a)
{
	// std::cout << std::endl << std::endl;
    std::cout << a << std::endl ;
}

main()
{
	std::vector<int> v{4,2,7,6,2,6,8,2};

	/*inserts an element x at the back of the vector A */
	v.push_back(5); 
	print_array(v);

	/*sort the vector A in ascending order*/
	std::sort(begin(v), end(v));
	print_array(v);

	/*reverses the vector A*/
	std::reverse(begin(v), end(v));
	print_array(v);

	/*returns the size of the vector  A */
	print(v.size());

	/*sorts the vector A in descending order*/
	std::sort(begin(v), end(v), std::greater<int>());
	print_array(v);


}

/*

Site solution:
This is a function problem.You only need to complete the function given below
You are required to complete below methods
inserts an element x at 
the back of the vector A 
void add_to_vector(vector<int> &A,int x)
{
	A.push_back(x);
}

void sort_vector_asc(vector<int> &A)
{
	std::sort(begin(A), end(A));
}

void reverse_vector(vector<int> &A)
{
	std::reverse(begin(A), end(A));
}

int size_of_vector(vector<int> &A)
{
	return A.size();
}

void sort_vector_desc(vector<int> &A)
{
	std::sort(begin(A), end(A), std::greater<int>());
}


void print_vector(vector<int> &A)
{
	std::for_each(A.begin(), A.end(), [](int i)->void {std::cout << i <<" ";});
}



*/