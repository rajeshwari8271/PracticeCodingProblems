#include<iostream>
using namespace std;
void countbits(int n)
{
    int count1 = 0,count0 = 0;
    while(n)
    {
        if(n&1)
           count1++;
        else
           {count0++;}

        n = n>>1;
    }
    cout<<"No of 1s "<<count1<<endl;
    cout<<"No of 0s "<<count0<<endl;

}
int main()
{
    int n = 22;
    countbits(n);
}