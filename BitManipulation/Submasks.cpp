/*Print all submasks of a given mask
Given an integer N, the task is to print all the 
subsets of the set formed by the set bits present in the binary representation of N.
Input: N = 5
Output: 5 4 1 
Explanation:
Binary representation of N is “101”, 
Therefore all the required subsets are {“101”, “100”, “001”, “000”}.


*/

#include<iostream>
using namespace std;
void findSubMasks(int N)
{
    
    int S = N;

    for( S = N; S ; S=(S-1)&N)
    { 
        cout<<S<<" ";

    }




}



int main()
{
    int N = 25;
    findSubMasks(N);

}