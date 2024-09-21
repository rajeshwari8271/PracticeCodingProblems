#include<iostream>
using namespace std;
void printBin(int n)
{
    long i;
    cout<<"0";
    for(i=1<<30;i>0;i=i/2)
    {
        if(n&i)
        {
            cout<<"1";
        }
        else
          cout<<"0";
    }
}



int main()
{
   long n = 10;
   printBin(n);





}