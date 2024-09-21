#include<iostream>
using namespace std;

bool powOf2(int n)
{
    return(!(n&(n-1)));
}

bool setBitsCheck(int num)
{
    if(num == 1)
      return true;
    else if(num == false)
      return false;
    else 
      return(powOf2(num-1));

}


int main()
{
    int num = 9;
    if(setBitsCheck(num))
         cout<<"True";
    else 
        cout<<"False";

}