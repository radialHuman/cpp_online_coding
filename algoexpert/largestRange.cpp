// https://www.algoexpert.io/questions/Largest%20Range
/* Problem
 Write a function that takes in an array of integers and returns an array of length 2 representing the largest range of numbers contained in that array. The first number in the output array should be the first number in the range while the second number should be the last number in the range. A range of numbers is defined as a set of numbers that come right after each other in the set of real integers. For instance, the output array [2, 6] represents the range {2, 3, 4, 5, 6}, which is a range of length 5. Note that numbers do not need to be ordered or adjacent in the array in order to form a range. Assume that there will only be one largest range.
Sample input: [1, 11, 3, 0, 15, 5, 2, 4, 10, 7, 12, 6]
 Sample output: [0, 7]

 range is continous set of numbers
*/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> largestRange(std::vector<int> v)
{
    // Write your code here.
    std::vector<int> output(2);
    std::sort(v.begin(), v.end());

    // removing non-continuous elements
    // v.erase(std::remove_if,v.begin(), v.end(), ...),v.end());
    for (int i = 0; i<sizeof(v)-1;++i)
        v.erase(std::remove_if(v.begin(), v.end(),[&](int i) { return (&*v.begin()+i - &*v.begin()+(i+1)) != 1; }),v.end());
        // v.erase(std::remove_if(v.begin(), v.end(),[&](const int& d) { return (&d - &*v.begin()+(i-1)) != 1; }),v.end());

    output[0] = v.front();
    output[1] = v.back();
    return output;
}

int main() {
    std::vector v1{4,2,1,3,6};
    std::cout <<"[" << largestRange(v1)[0]<<","<<largestRange(v1)[1]<<"]" << std::endl;
}
/*
* OUTPUT
[1,201335094]
*/
