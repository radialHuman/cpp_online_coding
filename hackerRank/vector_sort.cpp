/*
 * https://www.hackerrank.com/challenges/vector-sort/problem
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

// function to show vector values
template <class T>
void print(std::vector<T> v)
{
    for(auto i: v)
        std::cout << i << " ";
    std::cout << std::endl;
}

// printing out anything made easy
void print(std::string s)
{
    std::cout << s << std::endl;
}

// comparision function for descending sort
bool desc(double x, double y)
{
    return x>y;
}

int main()
{
    int size_of_v;
    std::cout << "Enter the size of the list\n";
    std::cin >> size_of_v;
    std::vector<int> v1(size_of_v);
    int x;
    for(int i = 0; i<size_of_v; ++i)
    {
        std::cout << "Enter the number :" ;
        std::cin >> x;
        v1.emplace_back(x);

    }
    std::sort(v1.begin(),v1.end());
    v1 = std::vector(v1.end()-size_of_v,v1.end());
    for(auto i: v1)
    {
        std::cout << i << " ";
    }



}




/*

Enter the size of the list
5
Enter the number :8
Enter the number :1
Enter the number :5
Enter the number :2
Enter the number :6
1 2 5 6 8

 */
