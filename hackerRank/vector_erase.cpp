/*
 * https://www.hackerrank.com/challenges/vector-erase/problem
 * The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, which means the 2nd and 3rd elements should be removed. Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}
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
    int x_loc;
    // showing whats in the vector
    std::vector<int> v1{6,1,5,2,5,2,9,3,8,3,0};
    std::cout << "The vector is :";
    std::for_each(v1.begin(),v1.end(),[](int i){std::cout << i << " ";});
    std::cout << std::endl;

    // asking for the locations to be removed
    std::cout << "Enter the position to be removed : ";
    std::cin >> x_loc;
    std::cout << std::endl;

    // removing one element
    v1.erase(v1.begin()+x_loc);
    std::cout << "The vector, after removing one element is : ";
    std::for_each(v1.begin(),v1.end(),[](int i){std::cout << i << " ";});
    std::cout << std::endl;

    // asking for range of removal
    int x_range_begin;
    std::cout << "Enter the starting range of position to be removed : ";
    std::cin >> x_range_begin;
    std::cout << std::endl;
    int x_range_end;
    std::cout << "Enter the end range of position to be removed : ";
    std::cin >> x_range_end;
    std::cout << std::endl;

    // removing a range
    v1.erase(v1.begin()+x_range_begin,v1.begin()+x_range_end);
    std::cout << "The vector, after removing range of elements is : ";
    std::for_each(v1.begin(),v1.end(),[](int i){std::cout << i << " ";});
    std::cout << std::endl;


}




/*

The vector is :6 1 5 2 5 2 9 3 8 3 0
Enter the position to be removed : 5

The vector, after removing one element is : 6 1 5 2 5 9 3 8 3 0
Enter the starting range of position to be removed : 6

Enter the end range of position to be removed :8

The vector, after removing range of elements is : 6 1 5 2 5 9 3 0


 */
