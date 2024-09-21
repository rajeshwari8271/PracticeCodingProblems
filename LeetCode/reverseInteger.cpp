#include<iostream>
#include<limits.h>
using namespace std;
int reverse(int m)
{
     long int rev=0,r;
    while(m)
    {
        r=m%10;
        rev=(rev*10)+r;
        m=m/10;
    }

if(rev>INT_MAX || rev<INT_MIN)
    {
        return 0;
    }

return rev;

}
int main()
{
    int n=123;
    cout<<reverse(n);

}