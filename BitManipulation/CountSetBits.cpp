#include<iostream>
using namespace std;
void countSetbits(int n)
{
    int count = 0;

    while(n)
    {
        if(n&1)
            count++;
        n>>=1;

    }
  cout<<"No of setbits is "<<count<<endl;

}


int main()
{
    int n=15;
    countSetbits(n);
}