//Find all powers of 2 less than a given number
/*
input:  62
output: 32,16,8,4,2

*/
#include<iostream>
#include <math.h>
#include<bitset>
using namespace std;
int main()
{
    int n = 63;
    int p = log2(n);

    cout<<p<<endl;
    bitset<64> arr(n);
    arr.reset();
    for(int i= p;i>0;i--)
    {
        arr.reset(i+1);
        arr.set(i);
        cout<<arr.to_ulong()<<endl;

    }
    




}
