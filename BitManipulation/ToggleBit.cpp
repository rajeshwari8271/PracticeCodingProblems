#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int p = 8;
    int pos = 3;
    p = p ^ (1<<pos);
    cout<<"After toggling "<<pos<<" bit "<<bitset<8>(p);
    }