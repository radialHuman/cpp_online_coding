/*
SCC consists of N members which are fond of philately. A few days ago Mike argued with the others from SCC. Mike told them that all stamps of the members could be divided in such a way that i'th member would get i postage stamps. Now Mike wants to know if he was right. The next SCC meeting is tomorrow. Mike still has no answer.

So, help Mike! There are N members in the SCC, i'th member has Ci stamps in his collection. Your task is to determine if it is possible to redistribute C1 + C2 + ... + Cn stamps among the members of SCC thus that i'th member would get i stamps.

Input
The first line contains one integer N, denoting the number of members of SCC.

The second line contains N integers Ci, denoting the numbers of the stamps in the collection of i'th member.

Output
The first line should contain YES, if we can obtain the required division, otherwise NO.

Constraints
1 ≤ N ≤ 100 000;

1 ≤ Ci ≤ 109.

Examples
Input:
5
7 4 1 1 2

Output:
YES

Input:
5
1 1 1 1 1

Output:
NO
*/

#include <iostream>

int main()
{
    auto numberOfMembers=0,stampCount=0,memberCount=0;
    int x;
    std::cin >> numberOfMembers;
    for(auto i=0; i<numberOfMembers;i++)
    {
        std::cin >> x;
        stampCount += x;
        memberCount += i+1;
    }
    if(memberCount==stampCount)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}