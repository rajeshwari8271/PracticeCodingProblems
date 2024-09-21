#include<iostream>
#include<bitset> 
using namespace std;

int unsetK(int N,int k)
{
    int mask = (~0 << (k+1)); 

    return(mask & N);
}

int main()
{
    int N = 200,k=5;
    cout<< bitset<8>(N)<<endl;
    int p =unsetK(N,k);
    cout<<bitset<8>(p)<<endl;
    cout<<p<<endl;


}