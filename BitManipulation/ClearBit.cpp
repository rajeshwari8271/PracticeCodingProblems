#include<iostream>
using namespace std;
int main()
{
    int p = 8;
    int pos = 3;
    p = p & (~(1<<pos));
    cout<<" clearing the "<<pos<<" is "<<p;
}